#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.61])
AC_INIT([math-bibmanager], [0.1], [oudomphe@math.unice.fr])
AM_INIT_AUTOMAKE
AC_CONFIG_SRCDIR([src/main.cpp])
AC_CONFIG_HEADERS([config.h])

# Checks for programs.
AC_PROG_CC
AC_PROG_CXX
AC_PROG_RANLIB
AC_PATH_PROG(XXD, xxd)
AC_PATH_PROG(SED, sed)

# Checks for libraries.
m4_ifndef([PKG_PROG_PKG_CONFIG],
    [m4_fatal([Could not locate the pkg-config autoconf macros.
  These are usually located in /usr/share/aclocal/pkg.m4. If your macros
  are in a different location, try setting the environment variable
  ACLOCAL="aclocal -I/other/macro/dir" before running autoreconf.])])
PKG_PROG_PKG_CONFIG()
PKG_CHECK_MODULES([GTK2], [gtk+-2.0 >= 2.12])
PKG_CHECK_MODULES([GTKMM], [gtkmm-2.4 >= 2.12])

# Checks for header files.
AC_CHECK_HEADER(ftw.h)

# Checks for typedefs, structures, and compiler characteristics.
AC_HEADER_STDBOOL
AC_TYPE_SIZE_T

# Checks for library functions.
AC_HEADER_MAJOR

AC_CONFIG_FILES([Makefile
                 src/Makefile
                 parser/Makefile])
AC_OUTPUT
