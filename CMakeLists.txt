# CMakeList.txt: проект CMake для CMakeProject2; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

project ("CMakeProject2")

set (CMAKE_CXX_STANDARD 14)

set(JSON_BuildTests OFF CACHE INTERNAL "")

add_subdirectory(nlohmann_json)

# Добавьте источник в исполняемый файл этого проекта.
add_executable (CMakeProject2 "CMakeProject2.cpp" "CMakeProject2.h")

# TODO: Добавьте тесты и целевые объекты, если это необходимо.

target_link_libraries(CMakeProject2 PRIVATE nlohmann_json::nlohmann_json)
