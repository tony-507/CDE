cmake_minimum_required (VERSION 3.10)
project (TonyCDE)

set (CMAKE_CXX_STANDARD 11)

# Include CMAKE_INSTALL_DIR
include (GNUInstallDirs)

# GoogleTest
include(FetchContent)
FetchContent_Declare(
	googletest
	URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_subdirectory (CommonLib)
add_subdirectory (Tests)
