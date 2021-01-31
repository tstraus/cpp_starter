# Static C Wrapper
project (cpp_static)

set (HEADERS
    cpp.h
)

set (SOURCE
    cpp.cpp
)

add_library (${PROJECT_NAME} STATIC ${SOURCE})

target_include_directories (${PROJECT_NAME}
    PUBLIC ${CMAKE_CURRENT_LIST_DIR}
)

target_link_libraries (${PROJECT_NAME}
    PUBLIC cpp_impl
)

install (TARGETS ${PROJECT_NAME} DESTINATION lib)
install (FILES ${HEADERS} DESTINATION include/cpp)

# Shared C Wrapper
project (cpp)

set (HEADERS
    cpp.h
)

set (SOURCE
    cpp.cpp
)

add_library (${PROJECT_NAME} SHARED ${SOURCE})

target_include_directories (${PROJECT_NAME}
    PUBLIC ${CMAKE_CURRENT_LIST_DIR}
)

target_link_libraries (${PROJECT_NAME}
    PUBLIC cpp_impl
)

install (TARGETS ${PROJECT_NAME} DESTINATION lib)
install (FILES ${HEADERS} DESTINATION include/cpp)

