noinst_LIBRARIES = libparser.a

libparser_a_SOURCES = \
	parser.cpp parser.hpp \
	library.cpp library.hpp \
	msc2010.cpp msc2010.hpp msc2010_db.h

check_PROGRAMS = test_parser
test_parser_SOURCES = test_parser.cpp parser.hpp
test_parser_CPPFLAGS = -DDEBUG

if NO_FTW_H
  libparser_a_CPPFLAGS = $(GLIBMM_CFLAGS)
  test_parser_LDADD = $(GLIBMM_LIBS) libparser.a
else
  test_parser_LDADD = libparser.a
endif

EXTRA_DIST = test.zb

