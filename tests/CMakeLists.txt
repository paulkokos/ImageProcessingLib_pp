add_executable(
        unit_tests
        ../tests/Tests.cpp
#        example_add.cpp
#        example_subtract.cpp
)

target_link_libraries(
        unit_tests
        gtest_main
        Library
)

add_test(
        NAME
        unit
        COMMAND
        ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR}/unit_tests
)