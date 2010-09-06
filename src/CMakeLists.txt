include_directories(${GTKMM_INCLUDE_DIRS} ${CMAKE_SOURCE_DIR}/parser)

add_custom_command(OUTPUT UImenubar.h
    COMMAND ${XXD} -i menubar.ui | ${SED} 's/unsigned char/const char/' > UImenubar.h
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    MAIN_DEPENDENCY menubar.ui)
add_custom_command(OUTPUT UIDefinition.h
    COMMAND ${XXD} -i uidef.xml | ${SED} 's/unsigned char/const char/' > UIDefinition.h
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    MAIN_DEPENDENCY uidef.xml)

add_executable(mathkaba
	main.cpp
	MainWindow.cpp MainWindow.hpp
	BibPopup.cpp BibPopup.hpp
	TreeBib.cpp TreeBib.hpp
	UImenubar.h UIDefinition.h)

target_link_libraries(mathkaba parser ${GTKMM_LIBRARIES})
