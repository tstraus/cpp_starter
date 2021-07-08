project (greeter_tests)

set (SOURCE
    greeter_tests.cpp
    greeter_api_tests.cpp
)

add_executable (${PROJECT_NAME} ${SOURCE})
add_test (NAME ${PROJECT_NAME} COMMAND ${PROJECT_NAME})

target_link_libraries (${PROJECT_NAME}
    greeter_api_static
    gtest_main
)

