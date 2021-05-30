project (greeter_gui)

set (SOURCE
    greeter_window.ui
    greeter_window.cpp
    greeter_window.h
    main.cpp
)

add_executable (${PROJECT_NAME} ${SOURCE})

target_link_libraries (${PROJECT_NAME}
    PRIVATE greeter_impl
    PRIVATE Qt6::Widgets
)

install (TARGETS ${PROJECT_NAME} DESTINATION bin)
