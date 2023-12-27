cmake_minimum_required (VERSION 3.8)

find_package(SDL2 REQUIRED)

add_executable (triangle "../triangle.cpp" "tortoise.hpp" "tortoise.cpp" "macros_typedefs.hpp")   

target_link_libraries(triangle SDL2::SDL2 SDL2::SDL2main)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET triangle PROPERTY CXX_STANDARD 20)
endif()

