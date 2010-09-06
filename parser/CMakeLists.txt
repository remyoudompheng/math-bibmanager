if(${HAVE_FTW_H})
    add_definitions(-DHAVE_FTW_H)
else()
    include_directories(${GLIBMM_INCLUDE_DIRS})
endif()

add_library(parser
    library.cpp library.hpp
    parser.cpp parser.hpp
    msc2010.cpp msc2010.hpp msc2010_db.h)

