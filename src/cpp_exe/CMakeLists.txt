project (cpp_cli)

set (SOURCE
    main.cpp
)

add_executable (${PROJECT_NAME} ${SOURCE})

target_link_libraries (${PROJECT_NAME}
    PRIVATE cpp_impl
    PRIVATE absl::flags
)

install (TARGETS ${PROJECT_NAME} DESTINATION bin)

