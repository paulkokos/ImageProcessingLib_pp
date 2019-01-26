add_library(Library "")

target_sources(
        Library
        PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/../lib/library.cpp
        PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/../lib/library.h
)

target_include_directories(
        Library
        PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
)