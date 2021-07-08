project (greeter_benchmarks)

set (SOURCE
    greeter_benchmarks.cpp
)

add_executable (${PROJECT_NAME} ${SOURCE})
add_test (NAME ${PROJECT_NAME} COMMAND ${PROJECT_NAME})

target_link_libraries (${PROJECT_NAME}
    greeter_api_static
    benchmark_main
)

