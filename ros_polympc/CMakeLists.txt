cmake_minimum_required(VERSION 3.8)
project(ros_polympc)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)

install(DIRECTORY submodules/polympc/src/
        DESTINATION include
        )
ament_export_include_directories(include)

ament_package()
