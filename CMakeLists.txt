cmake_minimum_required(VERSION 3.15)
project(IAM)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(LLAMA_DIR "C:/Projects/llama.cpp")

include_directories(
    "C:/dev/iam_project"                        
    ${CMAKE_CURRENT_SOURCE_DIR}     
    "${LLAMA_DIR}/include"
    "${LLAMA_DIR}/src"
    "${LLAMA_DIR}/ggml/include"
    "${LLAMA_DIR}/ggml/src"
)

file(GLOB_RECURSE IAM_SOURCES 
    "math_engine/*.cpp"
    "math_engine/*.h"
    "search_engine/*.cpp"
    "search_engine/*.h"
    "sorting_engine/*.cpp"
    "sorting_engine/*.h"
    "main.cpp"
)

add_executable(iam_app ${IAM_SOURCES})

target_link_libraries(iam_app PRIVATE 
    "C:/Projects/llama.cpp/build-x64-windows-msvc-release/src/llama.lib"
)