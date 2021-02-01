# Static C Wrapper
project (greeter_static)

set (HEADERS
    greeter.h
)

set (SOURCE
    greeter.cpp
)

add_library (${PROJECT_NAME} STATIC ${SOURCE})

target_include_directories (${PROJECT_NAME}
    PUBLIC ${CMAKE_CURRENT_LIST_DIR}
)

target_link_libraries (${PROJECT_NAME}
    PUBLIC greeter_impl
)

install (TARGETS ${PROJECT_NAME} DESTINATION lib)
install (FILES ${HEADERS} DESTINATION include/greeter)

# Shared C Wrapper
project (greeter)

set (HEADERS
    greeter.h
)

set (SOURCE
    greeter.cpp
)

add_library (${PROJECT_NAME} SHARED ${SOURCE})

target_include_directories (${PROJECT_NAME}
    PUBLIC ${CMAKE_CURRENT_LIST_DIR}
)

target_link_libraries (${PROJECT_NAME}
    PUBLIC greeter_impl
)

install (TARGETS ${PROJECT_NAME} DESTINATION lib)
install (FILES ${HEADERS} DESTINATION include/greeter)

