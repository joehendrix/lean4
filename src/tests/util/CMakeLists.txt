add_executable(object object.cpp $<TARGET_OBJECTS:util> $<TARGET_OBJECTS:runtime>)
target_link_libraries(object ${EXTRA_LIBS})
add_exec_test(object "object")
add_executable(compact compact.cpp $<TARGET_OBJECTS:util> $<TARGET_OBJECTS:runtime>)
target_link_libraries(compact ${EXTRA_LIBS})
add_exec_test(compact "compact")
add_executable(name name.cpp $<TARGET_OBJECTS:util> $<TARGET_OBJECTS:runtime>)
target_link_libraries(name ${EXTRA_LIBS})
add_exec_test(name "name")
add_executable(nat nat.cpp $<TARGET_OBJECTS:util> $<TARGET_OBJECTS:runtime>)
target_link_libraries(nat ${EXTRA_LIBS})
add_exec_test(nat "nat")
add_executable(buffer buffer.cpp $<TARGET_OBJECTS:util> $<TARGET_OBJECTS:runtime>)
target_link_libraries(buffer ${EXTRA_LIBS})
add_exec_test(buffer "buffer")
add_executable(list list.cpp $<TARGET_OBJECTS:util> $<TARGET_OBJECTS:runtime>)
target_link_libraries(list ${EXTRA_LIBS})
add_exec_test(list "list")
add_executable(rb_tree rb_tree.cpp $<TARGET_OBJECTS:util> $<TARGET_OBJECTS:runtime>)
target_link_libraries(rb_tree ${EXTRA_LIBS})
add_exec_test(rb_tree "rb_tree")
add_executable(rb_map rb_map.cpp $<TARGET_OBJECTS:util> $<TARGET_OBJECTS:runtime>)
target_link_libraries(rb_map ${EXTRA_LIBS})
add_exec_test(rb_map "rb_map")
add_executable(bit_tricks bit_tricks.cpp $<TARGET_OBJECTS:util> $<TARGET_OBJECTS:runtime>)
target_link_libraries(bit_tricks ${EXTRA_LIBS})
add_exec_test(bit_tricks "bit_tricks")
add_executable(hash hash.cpp $<TARGET_OBJECTS:util> $<TARGET_OBJECTS:runtime>)
target_link_libraries(hash ${EXTRA_LIBS})
add_exec_test(hash "hash")
add_executable(set set.cpp $<TARGET_OBJECTS:util> $<TARGET_OBJECTS:runtime>)
target_link_libraries(set ${EXTRA_LIBS})
add_exec_test(set "set")
add_executable(optional optional.cpp $<TARGET_OBJECTS:util> $<TARGET_OBJECTS:runtime>)
target_link_libraries(optional ${EXTRA_LIBS})
add_exec_test(optional "optional")
add_executable(stackinfo stackinfo.cpp $<TARGET_OBJECTS:util> $<TARGET_OBJECTS:runtime>)
target_link_libraries(stackinfo ${EXTRA_LIBS})
add_exec_test(stackinfo "stackinfo")
add_executable(serializer serializer.cpp $<TARGET_OBJECTS:util> $<TARGET_OBJECTS:runtime>)
target_link_libraries(serializer ${EXTRA_LIBS})
add_exec_test(serializer "serializer")
add_executable(trie trie.cpp $<TARGET_OBJECTS:util> $<TARGET_OBJECTS:runtime>)
target_link_libraries(trie ${EXTRA_LIBS})
add_exec_test(trie "trie")
add_executable(thread thread.cpp $<TARGET_OBJECTS:util> $<TARGET_OBJECTS:runtime>)
target_link_libraries(thread ${EXTRA_LIBS})
add_exec_test(thread "thread")
add_executable(bitap_fuzzy_search bitap_fuzzy_search.cpp $<TARGET_OBJECTS:util> $<TARGET_OBJECTS:runtime>)
target_link_libraries(bitap_fuzzy_search ${EXTRA_LIBS})
add_exec_test(bitap_fuzzy_search "bitap_fuzzy_search")
