
#ifndef IMAGE_ROTATION_LAB_IMAGE_H
#define IMAGE_ROTATION_LAB_IMAGE_H

#include <stdint.h>
#include <malloc.h>
#include <stdio.h>

struct pixel { uint8_t b, g, r; };
struct image {
    uint64_t width, height;
    struct pixel* data;
};
struct image create_image(uint64_t w, uint64_t h);
void destroy_image(struct image* img);
#endif //IMAGE_ROTATION_LAB_IMAGE_H
