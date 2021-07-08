# Static C Wrapper
project (greeter_api_static)

set (HEADERS
    greeter_api.h
)

set (SOURCE
    greeter_api.cpp
)

add_library (${PROJECT_NAME} STATIC ${SOURCE})

target_include_directories (${PROJECT_NAME}
    PUBLIC ${CMAKE_CURRENT_LIST_DIR}
)

target_link_libraries (${PROJECT_NAME}
    PUBLIC greeter
)

install (TARGETS ${PROJECT_NAME} DESTINATION lib)
install (FILES ${HEADERS} DESTINATION include/greeter)

# Shared C Wrapper
project (greeter_api_shared)

set (HEADERS
    greeter_api.h
)

set (SOURCE
    greeter_api.cpp
)

add_library (${PROJECT_NAME} SHARED ${SOURCE})

target_include_directories (${PROJECT_NAME}
    PUBLIC ${CMAKE_CURRENT_LIST_DIR}
)

target_link_libraries (${PROJECT_NAME}
    PRIVATE greeter
)

install (TARGETS ${PROJECT_NAME} DESTINATION lib)
install (FILES ${HEADERS} DESTINATION include/greeter)

