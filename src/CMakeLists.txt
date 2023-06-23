cmake_minimum_required (VERSION 3.8)

set(Pth "${CMAKE_SOURCE_DIR}/include")


add_executable (module32 "module32.cpp" "${Pth}/module32.h")
target_link_libraries(module32 PRIVATE nlohmann_json::nlohmann_json)