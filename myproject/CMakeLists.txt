cmake_minimum_required(VERSION 2.8)
set (CMAKE_CXX_STANDARD 11)
project(test)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

#find_package(OpenCV REQUIRED)
include_directories(${OPENGL_INCLUDE_DIR} ${GLUT_INCLUDE_DIR} include)

set(HEADERS include/utils.h)
set(SOURCES test.cpp src/utils.cpp)

add_executable(test ${HEADERS} ${SOURCES})
target_link_libraries(test ${OPENGL_LIBRARY} ${GLUT_LIBRARY} ${OpenCV_LIBS})