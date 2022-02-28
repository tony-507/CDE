# Unit tests
project(CDEUnitTest)
add_subdirectory (CommonLib)

set (TESTS
CommonLib/UtilTest.cpp
)

add_executable (${PROJECT_NAME} ${TESTS})

set (${PROJECT_NAME} PROPERTIES CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
target_link_libraries (${PROJECT_NAME} gtest_main)
target_link_libraries (${PROJECT_NAME} CommonLib)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME})
