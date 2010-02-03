noinst_LIBRARIES = libparser.a

libparser_a_SOURCES = parser.cpp parser.hpp

bin_PROGRAMS = test_parser
test_parser_SOURCES = test_parser.cpp parser.hpp
test_parser_CPPFLAGS = -DDEBUG
test_parser_LDADD = libparser.a
