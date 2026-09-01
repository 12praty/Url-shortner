cmake_minimum_required(VERSION 3.10)
project(UrlShortener)

add_executable(UrlShortener
    src/main.cpp
    src/UrlShortener.cpp
)

target_include_directories(UrlShortener PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)
