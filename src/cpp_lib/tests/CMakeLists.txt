project (cpp_tests)

set (SOURCE
    cpp_impl_tests.cpp
    cpp_lib_tests.cpp
)

add_executable (${PROJECT_NAME} ${SOURCE})
add_test (NAME ${PROJECT_NAME} COMMAND ${PROJECT_NAME})

target_link_libraries (${PROJECT_NAME}
    cpp_static
    gtest_main
)

