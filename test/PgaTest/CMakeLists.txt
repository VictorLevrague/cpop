cmake_minimum_required(VERSION 3.1)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/../../cmake) # main (top) cmake dir

project(PgaTest)

include(ExternalDependencies)

if(CMAKE_COMPILER_IS_GNUCXX)
    if (CMAKE_BUILD_TYPE STREQUAL "Release")
        SET(CMAKE_CXX_FLAGS " -Wno-unused-variable -Wno-unused-result -DG4USE_STD11 -pipe -m64 -fsigned-char -fPIC -pthread -std=c++11")
    endif(CMAKE_BUILD_TYPE STREQUAL "Release")

    if (CMAKE_BUILD_TYPE STREQUAL "Debug")
        SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall  -g -std=c++0x ")
    endif(CMAKE_BUILD_TYPE STREQUAL "Debug")

endif(CMAKE_COMPILER_IS_GNUCXX)

### Link Information system
include(InformationSystem)

### Link cReader
include(cReader)
#include_directories(../cReader/include)

### -------- Link MAS ----
include(MAS)

### ------  LINK MODELER  --------
include(Modeler)

# Set C++ 11
set(CMAKE_CXX_STANDARD 11)


# Project source
set(PROJECT_SOURCE
    main.cc
    test.cc
    )

# Project header
set(PROJECT_HEADER
    )

set(EXECUTABLE_NAME PgaTest)

add_executable( ${EXECUTABLE_NAME} ${PROJECT_SOURCE} ${PROJECT_HEADER})
target_compile_options(${EXECUTABLE_NAME} PRIVATE "-g")
target_include_directories(${EXECUTABLE_NAME} PUBLIC ${CATCH_INCLUDE_DIR})
target_link_libraries(${EXECUTABLE_NAME}
    cReader
    InformationSystem
    Platform_SMA
    Modeler
    CGAL
    CLHEP::CLHEP
    Qt5::Core
    Qt5::Xml ${Geant4_LIBRARIES} pthread)

#Copy a file
set(FILE_TO_COPY
    population.xml
    init.mac
    eSpectrum_550um.spec
    nano.mac
    both.mac
    )

foreach(FILE ${FILE_TO_COPY})
    add_custom_command(TARGET PgaTest POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy
        ${CMAKE_CURRENT_SOURCE_DIR}/${FILE}
        $<TARGET_FILE_DIR:${EXECUTABLE_NAME}>
        )
endforeach()


# TESTING
include(CTest)
add_test(NAME PgaCTEST COMMAND ${EXECUTABLE_NAME} )
set_tests_properties(PgaCTEST PROPERTIES
    PASS_REGULAR_EXPRESSION "All tests passed"
    )
