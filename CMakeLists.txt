cmake_minimum_required (VERSION 3.16.0)

set (CMAKE_CXX_STANDARD 17)

project (greeter)

set (CMAKE_EXPORT_COMPILE_COMMANDS ON) # for editors to use
set (CMAKE_POSITION_INDEPENDENT_CODE ON) # -fPIC

# check if we can turn on LTO with CMake
include(CheckIPOSupported)
check_ipo_supported(RESULT result)
if (result)
    cmake_policy(SET CMP0069 NEW)
    set(CMAKE_POLICY_DEFAULT_CMP0069 NEW)
    set (CMAKE_INTERPROCEDURAL_OPTIMIZATION ON)
endif ()

add_subdirectory (src)

# Packaging support
set (CPACK_GENERATOR "ZIP")
set (CPACK_PACAKGE_VENDOR "tstraus")
set (CPACK_PACKAGE_DESCRIPTION_SUMMARY "greeter")
set (CPACK_PACKAGE_VERSION_MAJOR 0)
set (CPACK_PACKAGE_VERSION_MINOR 1)
set (CPACK_PACKAGE_VERSION_PATCH 0)
set (CPACK_RESOURCE_FILE_README "${CMAKE_CURRENT_SOURCE_DIR}/README.md")
set (CPACK_INCLUDE_TOPLEVEL_DIRECTORY OFF)

include (CPack)

