noinst_LIBRARIES = libparser.a

libparser_a_SOURCES = \
	parser.cpp parser.hpp \
	library.cpp library.hpp \
	msc2010.cpp msc2010.hpp msc2010_db.h

bin_PROGRAMS = test_parser
test_parser_SOURCES = test_parser.cpp parser.hpp
test_parser_CPPFLAGS = -DDEBUG
test_parser_LDADD = libparser.a

EXTRA_DIST = test.zb

