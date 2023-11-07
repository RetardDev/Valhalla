cmake_minimum_required(VERSION 3.26)
project(Valhalla)

set(CMAKE_CXX_STANDARD 17)

find_package(SFML 2.5 COMPONENTS graphics audio)
add_executable(Valhalla main.cpp
        GameEngine.h
        GameEngine.cpp
        Background.h
        Background.cpp)

target_link_libraries(Valhalla sfml-graphics sfml-audio)
