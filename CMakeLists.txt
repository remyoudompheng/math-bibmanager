cmake_minimum_required(VERSION 2.8)

PROJECT(mathkaba)

# =======================================================
# Information to update before to release this package.

# package version
SET(MATHKABA_VERSION "0.2.2")

Include(CheckIncludeFile)
check_include_file(ftw.h HAVE_FTW_H)

# utilities
find_program(XXD xxd)
find_program(SED sed)

Include(FindPkgConfig)
pkg_check_modules(GLIBMM REQUIRED glibmm-2.4)
pkg_check_modules(GTK2 REQUIRED gtk+-2.0>=2.12)
pkg_check_modules(GTKMM REQUIRED gtkmm-2.4>=2.12)

include_directories(${CMAKE_BINARY_DIR} ${CMAKE_SOURCE_DIR}/parser)
link_directories(${CMAKE_BINARY_DIR}/parser)

configure_file(config.h.cmake config.h)
add_subdirectory(parser)
add_subdirectory(src)

