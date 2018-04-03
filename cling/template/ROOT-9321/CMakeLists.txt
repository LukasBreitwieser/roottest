ROOTTEST_GENERATE_DICTIONARY(ROOT-9321-dictionary
                             reproducer.h
                             LINKDEF reproducer_linkdef.h)

ROOTTEST_ADD_TEST(ROOT-9321
                  MACRO reproducer.cxx
                  OUTREF reproducer.ref
                  DEPENDS ${GENERATE_DICTIONARY_TEST}
                  LABELS roottest cling)
