cmake_minimum_required(VERSION 2.6)
project(pbr)

include_directories(src contrib)

add_library(code
src/code/Camera.cpp
src/code/Camera.h
src/code/Texture.cpp
src/code/Texture.h
src/code/RenderTexture.cpp
src/code/RenderTexture.h
src/code/Shader.cpp
src/code/Shader.h
src/code/Sphere.cpp
src/code/Sphere.h
src/code/resources.h
src/code/resources.cpp
)
target_link_libraries(code SDL2 opengl32 glew32)

add_executable(pbr
 src/main/main.cpp
)
target_link_libraries(pbr code)