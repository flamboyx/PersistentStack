cmake_minimum_required(VERSION 3.27)
project(PersistentStack)

set(CMAKE_CXX_STANDARD 20)

add_executable(PersistentStack PersiStack.h
        PersiStackTests.cpp)
