cmake_minimum_required (VERSION 3.8)

set(SDL2_DIR "../SDL2-2.28.5")
find_package(SDL2 REQUIRED)

add_executable (cppturtle "../tests/main.cpp" "cppturtle.h")   

target_link_libraries(cppturtle SDL2::SDL2 SDL2::SDL2main)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET cppturtle PROPERTY CXX_STANDARD 20)
endif()

