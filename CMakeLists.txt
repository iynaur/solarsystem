cmake_minimum_required(VERSION 3.1)
project(er_system)

add_definitions(-std=c++11)



find_package(OpenGL REQUIRED)
include_directories(${OpenGL_INCLUDE_DIRS})
link_directories(${OpenGL_LIBRARY_DIRS})
add_definitions(${OpenGL_DEFINITIONS})

find_package(GLUT REQUIRED)
include_directories(${GLUT_INCLUDE_DIRS})
link_directories(${GLUT_LIBRARY_DIRS})
add_definitions(${GLUT_DEFINITIONS})

file(GLOB CXX_FILES *.cpp)
add_executable(er_system main.cpp)
target_link_libraries(er_system  m ${OPENGL_LIBRARIES} ${GLUT_LIBRARY}
    -lpthread
    -lGL
            -lGLU
            -lGLEW
            -lglut)
