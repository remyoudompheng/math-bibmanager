bin_PROGRAMS = mathkaba

EXTRA_DIST = uidef.xml menubar.ui

UImenubar.h: menubar.ui
	$(XXD) -i menubar.ui | $(SED) -e 's/unsigned char/const char/' > UImenubar.h
UIDefinition.h: uidef.xml
	$(XXD) -i uidef.xml | $(SED) -e 's/unsigned char/const char/' > UIDefinition.h
main.cpp: UIDefinition.h
MainWindow.cpp: UImenubar.h

mathkaba_SOURCES = main.cpp UIDefinition.h UImenubar.h \
	MainWindow.cpp MainWindow.hpp \
	BibPopup.cpp BibPopup.hpp \
	TreeBib.cpp TreeBib.hpp

mathkaba_CPPFLAGS = $(GTKMM_CFLAGS) -I../parser

mathkaba_LDADD = $(GTKMM_LIBS) \
	$(top_srcdir)/parser/libparser.a

clean-local:
	rm -f UIDefinition.h UImenubar.h
