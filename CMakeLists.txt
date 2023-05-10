cmake_minimum_required(VERSION 3.16)
project(csv_logger)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_executable(csv_logger
        src/CsvLogger.cpp
        src/CsvLogger.h src/CsvLoggerConfiguration.h)
