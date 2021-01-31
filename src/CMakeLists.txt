set (CMAKE_DEBUG_POSTFIX d)

include (cmake/Externals.cmake)
enable_testing ()

set (CMAKE_CXX_VISIBILITY_PRESET hidden)

# various debugging and profiling options
if (NOT WIN32)
    if (CMAKE_BUILD_TYPE STREQUAL "Debug")
        #set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address -g")
        #set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=thread -g")
        #set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=undefined -g")
        #set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=leak -g")
    endif ()

    if (CMAKE_BUILD_TYPE STREQUAL "Release")
        #set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-omit-frame-pointer")
    endif ()
endif ()

add_subdirectory (cpp_lib)
add_subdirectory (cpp_exe)
