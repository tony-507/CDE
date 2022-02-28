# Add library CommonLib
# Content:
# Useful data structures
cmake_minimum_required (VERSION 3.10)
project (CommonLib)

set (CMAKE_CXX_STANDARD 11)

set (SRC
src/types.cpp
src/queue.cpp
src/stack.cpp
src/Utils.cpp
)

set (HEADERS
include/queue.h;
include/stack.h;
include/types.h;
include/Utils.hpp
)

add_library(CommonLib SHARED ${SRC})

set_target_properties(CommonLib PROPERTIES
	VERSION 1.0.0
	SOVERSION 1)

install(TARGETS CommonLib
		LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

install (FILES ${HEADERS} DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/CommonLib)
