project (cpp_impl)

set (HEADERS
    cpp_impl.hpp
)

set (SOURCE
    cpp_impl.cpp
)

add_library (${PROJECT_NAME} STATIC ${SOURCE})

target_include_directories (${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries (${PROJECT_NAME}
    PUBLIC spdlog
)

add_subdirectory (wrapper)
add_subdirectory (tests)
add_subdirectory (benchmarks)

