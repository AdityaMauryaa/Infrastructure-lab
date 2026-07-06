cmake_minimum_required(VERSION 3.20)
project(Logger
    VERSION 1.0.0
    DESCRIPTION "Trying C++ Logger"
    LANGUAGES CXX
)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(Logger
    src/Logger.cpp
    src/LogLevel.cpp
)
target_include_directories(Logger
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_executable(logger_test
    tests/LoggerTest.cpp
)

target_link_libraries(logger_test
    PRIVATE
        logger
)