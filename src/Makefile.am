bin_PROGRAMS = mathbib

EXTRA_DIST = uidef.xml

UIDefinition.h: uidef.xml
	$(XXD) -i uidef.xml | $(SED) -e 's/unsigned char/const char/' > UIDefinition.h
main.cpp: UIDefinition.h

mathbib_SOURCES = main.cpp UIDefinition.h \
	MainWindow.cpp MainWindow.hpp

mathbib_CPPFLAGS = $(GTKMM_CFLAGS) -I../parser

mathbib_LDADD = $(GTKMM_LIBS) \
	$(top_srcdir)/parser/libparser.a

clean-local:
	rm -f UIDefinition.h
