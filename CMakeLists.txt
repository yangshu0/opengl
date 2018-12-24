cmake_minimum_required (VERSION 2.6)
project (OpenGL)
set (SPDF_VERSION_MAJOR 0)
set (SPDF_VERSION_MINOR 1)
#set(CMAKE_MODULE_PATH /home/shu/workspace/cmake)
#set(GLFW_DIR /path/to/cmake)

find_package(GLEW REQUIRED) 
find_package(glfw3 REQUIRED) 
find_package(OpenCV 3.0 REQUIRED )
find_package(PCL 1.3 REQUIRED COMPONENTS common io)
find_package(Boost 1.40 COMPONENTS program_options REQUIRED)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ..)

include_directories(
    ${PCL_INCLUDE_DIRS}
    ${PROJECT_SOURCE_DIR}
    ${OpenCV_INCLUDE_DIRS}
    ${Boost_INCLUDE_DIR}
    ${GLEW_INCLUDE_DIRS}
    ${glfw3_INCLUDE_DIRS}
)

link_directories($(GLEW_LIBRARY_DIRS) $(glfw3_LIBRARY_DIRS) ${OpenCV_LIBRARY_DIRS} ${PCL_LIBRARY_DIRS})

#ADD_DEFINITIONS(
#    -std=c++14
#    -lGL
#    -lGLU
#    -lGLEW
#    -lglfw
#)

add_executable(gl main.cpp)
target_link_libraries (gl GL GLU GLEW glfw ${OpenCV_LIBS} ${PCL_COMMON_LIBRARES} ${PCL_IO_LIBRARIES} ${Boost_LIBRARIES} )

