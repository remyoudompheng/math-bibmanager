bin_PROGRAMS = mathbib

UIDefinition.h: uidef.xml
	$(XXD) -i uidef.xml | $(SED) -e 's/unsigned char/const char/' > UIDefinition.h

mathbib_SOURCES = main.cpp UIDefinition.h

mathbib_CPPFLAGS = $(GTKMM_CFLAGS)

mathbib_LDADD = $(GTKMM_LIBS)
