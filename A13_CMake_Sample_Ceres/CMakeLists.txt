cmake_minimum_required(VERSION 3.1)

find_package(Ceres REQUIRED)

add_executable(main_app main.cpp)

target_link_libraries(main_app ceres)

if(MSVC AND ${MSVC_VERSION} GREATER_EQUAL 1915)
  target_compile_definitions(main_app PRIVATE _ENABLE_EXTENDED_ALIGNED_STORAGE)
endif()