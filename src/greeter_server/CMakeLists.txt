project (greeter_server)

set (SOURCE
    main.cpp
)

add_executable (${PROJECT_NAME} ${SOURCE})

target_link_libraries (${PROJECT_NAME}
    PRIVATE greeter
    PRIVATE httplib::httplib
)

install (TARGETS ${PROJECT_NAME} DESTINATION bin)
