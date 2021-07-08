# Implementation
project (greeter)

set (HEADERS
    greeter.hpp
)

set (SOURCE
    greeter.cpp
)

add_library (${PROJECT_NAME} STATIC ${SOURCE})

target_include_directories (${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries (${PROJECT_NAME}
    PUBLIC EnTT::EnTT
    PUBLIC spdlog
    PUBLIC absl::strings
    PUBLIC absl::synchronization
)

add_subdirectory (api)
add_subdirectory (tests)
add_subdirectory (benchmarks)

