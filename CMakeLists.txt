# CMakeList.txt: проект CMake для module32; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

project ("module32")


# Добавьте источник в исполняемый файл этого проекта.
add_subdirectory(src)
add_subdirectory(${CMAKE_SOURCE_DIR}/include/nlohmann_json)

set(JSON_BuildTests OFF CACHE INTERNAL "")
