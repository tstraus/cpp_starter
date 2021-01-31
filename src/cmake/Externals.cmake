include (cmake/CPM.cmake)

CPMAddPackage (
    NAME abseil
    GITHUB_REPOSITORY abseil/abseil-cpp
    GIT_TAG 20200923.1
    OPTIONS
        "ABSL_ENABLE_INSTALL OFF"
        "ABSL_RUN_TESTS OFF"
)

CPMAddPackage (
    NAME spdlog
    GITHUB_REPOSITORY gabime/spdlog
    VERSION 1.8.1
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
CPMAddPackage (
    NAME googletest
    GITHUB_REPOSITORY google/googletest
    GIT_TAG release-1.10.0
    OPTIONS
        "INSTALL_GTEST OFF"
)

CPMAddPackage (
    NAME benchmark
    GITHUB_REPOSITORY google/benchmark
    VERSION 1.5.2
    OPTIONS
        "BENCHMARK_ENABLE_TESTING OFF"
        "BENCHMARK_ENABLE_INSTALL OFF"
)

