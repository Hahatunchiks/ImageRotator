cmake_minimum_required(VERSION 3.17)
project(image_rotation_lab C)

set(CMAKE_C_STANDARD 11)

add_executable(image_rotation_lab
        main.c bmp.c bmp.h image.c image.h utils.c utils.h
        rotate.c rotate.h)