project (greeter_cli)

set (SOURCE
    main.cpp
)

add_executable (${PROJECT_NAME} ${SOURCE})

target_link_libraries (${PROJECT_NAME}
    PRIVATE greeter
    PRIVATE absl::flags_parse
    PRIVATE absl::flags_config
)

install (TARGETS ${PROJECT_NAME} DESTINATION bin)

