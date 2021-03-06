#include "utils.h"

void usage() {
    fprintf(stderr, "Usage: ./rotate_img SRC_IMG\n");
}

int main(int argc, char** argv){
    if (argc != 2) usage();
    if (argc < 2) err("Not enough arguments \n");
    if (argc > 2) err("Too many arguments \n");
    struct image orig = {0};
    from_file(argv[1], &orig);
    struct image copy = {0};
    copy = rotate(orig);
    to_file(argv[1], &copy);
    return 0;
}