#ifndef IMAGE_ROTATION_LAB_UTILS_H
#define IMAGE_ROTATION_LAB_UTILS_H
#include "bmp.h"
#include "rotate.h"


void error_in_open_handler(enum open_status e);
void error_in_read_handler(enum read_status e);
void error_in_close_handler(enum close_status e);
void error_in_write_handler(enum write_status e);

_Noreturn void err(const char *msg, ...);
#endif
