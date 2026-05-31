cmake_minimum_required(VERSION 3.16)

project(MyProject)

add_executable(${PROJECT_NAME}
    src/main.cpp
    src/utilities.cpp
)

target_include_directories(${PROJECT_NAME}
    PRIVATE
        include
)
