cmake_minimum_required (VERSION 3.8)

find_package(SDL2 REQUIRED)

add_executable (rectangle "../rectangle.cpp" "tortoise.cpp" )   

target_link_libraries(rectangle SDL2::SDL2 SDL2::SDL2main)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET rectangle PROPERTY CXX_STANDARD 20)
endif()

