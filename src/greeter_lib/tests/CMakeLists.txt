project (greeter_tests)

set (SOURCE
    greeter_impl_tests.cpp
    greeter_lib_tests.cpp
)

add_executable (${PROJECT_NAME} ${SOURCE})
add_test (NAME ${PROJECT_NAME} COMMAND ${PROJECT_NAME})

target_link_libraries (${PROJECT_NAME}
    greeter_static
    gtest_main
)

