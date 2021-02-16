#include "rotate.h"



static uint64_t copy_pixel_address(struct image const source, uint64_t w, uint64_t h){
    return source.height * w + source.height - h;
}
static uint64_t source_pixel_adress(struct image const source, uint64_t w, uint64_t h){
    return source.width * h + w;
}

struct image rotate(struct image const source) {
    struct image copy = create_image(source.height, source.width);
    for (uint64_t height = 0; height < source.height; height++) {
        for (uint64_t width = 0; width < source.width; width++){
            copy.data[copy_pixel_address(source, width, height)] = source.data[source_pixel_adress(source, width, height)];
        }
    }
    return copy;
}