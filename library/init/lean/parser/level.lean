/-
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura, Sebastian Ullrich
-/
prelude
import init.lean.parser.parser

namespace Lean
namespace Parser

@[init mkBuiltinParsingTablesRef]
constant builtinLevelParsingTable : IO.Ref ParsingTables := default _

@[init] def regBuiltinLevelParserAttr : IO Unit :=
registerBuiltinParserAttribute `builtinLevelParser `Lean.Parser.builtinLevelParsingTable

def mkLevelParserAttribute : IO ParserAttribute :=
registerParserAttribute `levelParser "level" "universe level parser" (some builtinLevelParsingTable)

@[init mkLevelParserAttribute]
constant levelParserAttribute : ParserAttribute := default _

@[inline] def levelParser {k : ParserKind} (rbp : Nat := 0) : Parser k :=
{ fn := fun _ => levelParserAttribute.runParser rbp }

namespace Level

@[builtinLevelParser] def paren := parser! symbol "(" appPrec >> levelParser >> ")"
@[builtinLevelParser] def max   := parser! symbolOrIdent "max"  >> many1 (levelParser appPrec)
@[builtinLevelParser] def imax  := parser! symbolOrIdent "imax" >> many1 (levelParser appPrec)
@[builtinLevelParser] def hole  := parser! "_"
@[builtinLevelParser] def num   : Parser := numLit
@[builtinLevelParser] def ident : Parser := ident
@[builtinLevelParser] def addLit := tparser! pushLeading >> symbol "+" (65:Nat) >> numLit

end Level

end Parser
end Lean
