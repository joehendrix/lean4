/-
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura, Sebastian Ullrich
-/
prelude
import init.lean.parser.parser
import init.lean.parser.level

namespace Lean
namespace Parser

@[init mkBuiltinParsingTablesRef]
constant builtinTermParsingTable : IO.Ref ParsingTables := default _

@[init] def regBuiltinTermParserAttr : IO Unit :=
registerBuiltinParserAttribute `builtinTermParser `Lean.Parser.builtinTermParsingTable

def mkTermParserAttribute : IO ParserAttribute :=
registerParserAttribute `termParser "term" "term parser" (some builtinTermParsingTable)

@[init mkTermParserAttribute]
constant termParserAttribute : ParserAttribute := default _

@[inline] def termParser {k : ParserKind} (rbp : Nat := 0) : Parser k :=
{ fn := fun _ => termParserAttribute.runParser rbp }

namespace Term
/- Helper functions for defining simple parsers -/

def unicodeInfixR (sym : String) (asciiSym : String) (lbp : Nat) : TrailingParser :=
pushLeading >> unicodeSymbol sym asciiSym lbp >> termParser (lbp - 1)

def infixR (sym : String) (lbp : Nat) : TrailingParser :=
pushLeading >> symbol sym lbp >> termParser (lbp - 1)

def unicodeInfixL (sym : String) (asciiSym : String) (lbp : Nat) : TrailingParser :=
pushLeading >> unicodeSymbol sym asciiSym lbp >> termParser lbp

def infixL (sym : String) (lbp : Nat) : TrailingParser :=
pushLeading >> symbol sym lbp >> termParser lbp

/- Builting parsers -/
def explicitUniv   := parser! ".{" >> sepBy1 levelParser ", " >> "}"
def namedPattern := parser! checkNoWsBefore "no space before '@'" >> "@" >> termParser appPrec
@[builtinTermParser] def id := parser! ident >> optional (explicitUniv <|> namedPattern)
@[builtinTermParser] def num : Parser := numLit
@[builtinTermParser] def str : Parser := strLit
@[builtinTermParser] def char : Parser := charLit
@[builtinTermParser] def type := parser! symbol "Type" appPrec
@[builtinTermParser] def sort := parser! symbol "Sort" appPrec
@[builtinTermParser] def prop := parser! symbol "Prop" appPrec
@[builtinTermParser] def hole := parser! symbol "_" appPrec
@[builtinTermParser] def «sorry» := parser! symbol "sorry" appPrec
@[builtinTermParser] def cdot   := parser! symbol "·" appPrec
@[builtinTermParser] def emptyC := parser! symbol "∅" appPrec
def typeAscription := parser! " : " >> termParser
def tupleTail      := parser! ", " >> sepBy1 termParser ", "
def parenSpecial : Parser := optional (tupleTail <|> typeAscription)
@[builtinTermParser] def paren := parser! symbol "(" appPrec >> optional (termParser >> parenSpecial) >> ")"
@[builtinTermParser] def anonymousCtor := parser! symbol "⟨" appPrec >> sepBy termParser ", " >> "⟩"
def optIdent : Parser := optional (try (ident >> " : "))
@[builtinTermParser] def «if»  := parser! "if " >> optIdent >> termParser >> " then " >> termParser >> " else " >> termParser
def fromTerm   := parser! " from " >> termParser
def haveAssign := parser! " := " >> termParser
@[builtinTermParser] def «have» := parser! "have " >> optIdent >> termParser >> (haveAssign <|> fromTerm) >> "; " >> termParser
@[builtinTermParser] def «suffices» := parser! "suffices " >> optIdent >> termParser >> fromTerm >> "; " >> termParser
@[builtinTermParser] def «show»     := parser! "show " >> termParser >> fromTerm
@[builtinTermParser] def «fun»      := parser! unicodeSymbol "λ" "fun" >> many1 (termParser appPrec) >> unicodeSymbol "⇒" "=>" >> termParser
def structInstField  := parser! ident >> " := " >> termParser
def structInstSource := parser! ".." >> optional termParser
@[builtinTermParser] def structInst := parser! symbol "{" appPrec >> optional (try (ident >> " . ")) >> sepBy (structInstField <|> structInstSource) ", " true >> "}"
def typeSpec := parser! " : " >> termParser
def optType : Parser := optional typeSpec
@[builtinTermParser] def subtype := parser! "{" >> ident >> optType >> " // " >> termParser >> "}"
@[builtinTermParser] def list := parser! symbol "[" appPrec >> sepBy termParser "," true >> "]"
@[builtinTermParser] def explicit := parser! symbol "@" appPrec >> id
@[builtinTermParser] def inaccessible := parser! symbol ".(" appPrec >> termParser >> ")"
def binderIdent : Parser  := ident <|> hole
def binderType (requireType := false) : Parser := if requireType then " : " >> termParser else optional (" : " >> termParser)
def binderDefault := parser! " := " >> termParser
def binderTactic  := parser! " . " >> termParser
def explicitBinder (requireType := false) := parser! "(" >> many1 binderIdent >> binderType requireType >> optional (binderDefault <|> binderTactic) >> ")"
def implicitBinder (requireType := false) := parser! "{" >> many1 binderIdent >> binderType requireType >> "}"
def instBinder := parser! "[" >> optIdent >> termParser >> "]"
def bracktedBinder (requireType := false) := explicitBinder requireType <|> implicitBinder requireType <|> instBinder
@[builtinTermParser] def depArrow := parser! bracktedBinder true >> unicodeSymbolCheckPrec " → " " -> " 25 >> termParser
def simpleBinder := parser! many1 binderIdent
@[builtinTermParser] def «forall» := parser! unicodeSymbol "∀" "forall" >> many1 (simpleBinder <|> bracktedBinder) >> ", " >> termParser
def matchAlt := parser! " | " >> sepBy1 termParser ", " >> " => " >> termParser
@[builtinTermParser] def «match» := parser! "match " >> sepBy1 termParser ", " >> optType >> " with " >> many1Indent matchAlt "'match' alternatives must be indented"
@[builtinTermParser] def «nomatch»  := parser! "nomatch " >> termParser
@[builtinTermParser] def «parser!»  := parser! "parser! " >> termParser
@[builtinTermParser] def «tparser!» := parser! "tparser! " >> termParser
@[builtinTermParser] def borrowed   := parser! symbol "@&" appPrec >> termParser (appPrec - 1)
@[builtinTermParser] def quotedName := parser! symbol "`" appPrec >> rawIdent

/- Remark: we use `checkWsBefore` to ensure `let x[i] := e; b` is not parsed as `let x [i] := e; b` where `[i]` is an `instBinder`. -/
def letIdLhs : Parser := ident >> checkWsBefore "expected space before binders" >> many bracktedBinder >> optType
def letIdDecl         := parser! try (letIdLhs >> " := ") >> termParser
def equation := parser! " | " >> many1 (termParser appPrec) >> " := " >> termParser
def letEqns           := parser! try (letIdLhs >> lookahead " | ") >> many1Indent equation "equations must be indented"
def letPatDecl        := parser! termParser >> optType >> " := " >> termParser
def letDecl           := try letIdDecl <|> letEqns <|> letPatDecl
@[builtinTermParser] def «let» := parser! "let " >> letDecl >> "; " >> termParser
def leftArrow : Parser := unicodeSymbol " ← " " <- "
def doLet  := parser! "let " >> letDecl
def doId   := parser! try (ident >> optType >> leftArrow) >> termParser
def doPat  := parser! try (termParser >> leftArrow) >> termParser >> optional (" | " >> termParser)
def doExpr := parser! termParser
def doElem := doLet <|> doId <|> doPat <|> doExpr
def doSeq  := parser! sepBy1 doElem "; "
def bracketedDoSeq := parser! "{" >> doSeq >> "}"
@[builtinTermParser] def «do»  := parser! "do " >> (bracketedDoSeq <|> doSeq)

@[builtinTermParser] def not    := parser! symbol "¬" 40 >> termParser 40
@[builtinTermParser] def bnot   := parser! symbol "!" 40 >> termParser 40
@[builtinTermParser] def uminus := parser! "-" >> termParser 100

def namedArgument  := tparser! try ("(" >> ident >> " := ") >> termParser >> ")"
@[builtinTermParser] def app     := tparser! pushLeading >> (namedArgument <|> termParser appPrec)
def checkIsSort := checkLeading (fun leading => leading.isOfKind `Lean.Parser.Term.type || leading.isOfKind `Lean.Parser.Term.sort)
@[builtinTermParser] def sortApp := tparser! checkIsSort >> pushLeading >> levelParser appPrec
@[builtinTermParser] def proj    := tparser! pushLeading >> symbolNoWs "." (appPrec+1) >> (fieldIdx <|> ident)
@[builtinTermParser] def arrow   := tparser! unicodeInfixR " → " " -> " 25
@[builtinTermParser] def array   := tparser! pushLeading >> symbolNoWs "[" (appPrec+1) >> termParser >>"]"

@[builtinTermParser] def dollar := tparser! infixR " $ " 1
@[builtinTermParser] def fcomp  := tparser! infixR " ∘ " 90

@[builtinTermParser] def prod  := tparser! infixR " × " 35

@[builtinTermParser] def add   := tparser! infixL " + "  65
@[builtinTermParser] def sub   := tparser! infixL " - "  65
@[builtinTermParser] def mul   := tparser! infixL " * "  70
@[builtinTermParser] def div   := tparser! infixL " / "  70
@[builtinTermParser] def mod   := tparser! infixL " % "  70
@[builtinTermParser] def modN  := tparser! infixL " %ₙ " 70
@[builtinTermParser] def pow   := tparser! infixR " ^ " 80

@[builtinTermParser] def le    := tparser! unicodeInfixL " ≤ " " <= " 50
@[builtinTermParser] def ge    := tparser! unicodeInfixL " ≥ " " >= " 50
@[builtinTermParser] def lt    := tparser! infixL " < " 50
@[builtinTermParser] def gt    := tparser! infixL " > " 50
@[builtinTermParser] def eq    := tparser! infixL " = " 50
@[builtinTermParser] def ne    := tparser! infixL " ≠ " 50
@[builtinTermParser] def beq   := tparser! infixL " == " 50
@[builtinTermParser] def bne   := tparser! infixL " != " 50
@[builtinTermParser] def heq   := tparser! unicodeInfixL " ≅ " " ~= " 50
@[builtinTermParser] def equiv := tparser! infixL " ≈ " 50

@[builtinTermParser] def subst := tparser! infixR " ▸ " 75

@[builtinTermParser] def and   := tparser! unicodeInfixR " ∧ " " /\\ " 35
@[builtinTermParser] def or    := tparser! unicodeInfixR " ∨ " " \\/ " 30
@[builtinTermParser] def iff   := tparser! unicodeInfixL " ↔ " " <-> " 20

@[builtinTermParser] def band  := tparser! infixL " && " 35
@[builtinTermParser] def bor   := tparser! infixL " || " 30

@[builtinTermParser] def append := tparser! infixL " ++ " 65
@[builtinTermParser] def cons   := tparser! infixR " :: " 67

@[builtinTermParser] def orelse      := tparser! infixR " <|> " 2
@[builtinTermParser] def orM         := tparser! infixR " <||> " 30
@[builtinTermParser] def andM        := tparser! infixR " <&&> " 35
@[builtinTermParser] def andthen     := tparser! infixR " >> "  60
@[builtinTermParser] def bind        := tparser! infixR " >>= " 55
@[builtinTermParser] def mapRev      := tparser! infixR " <&> " 100
@[builtinTermParser] def seq         := tparser! infixL " <*> " 60
@[builtinTermParser] def seqLeft     := tparser! infixL " <* "  60
@[builtinTermParser] def seqRight    := tparser! infixR " *> "  60
@[builtinTermParser] def map         := tparser! infixR " <$> " 100
@[builtinTermParser] def mapConst    := tparser! infixR " <$ "  100
@[builtinTermParser] def mapConstRev := tparser! infixR " $> "  100

end Term

end Parser
end Lean
