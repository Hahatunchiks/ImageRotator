CFLAGS=--std=c18 -Wall -pedantic -Isrc/ -ggdb -Wextra -Werror -DDEBUG
CC=gcc

all: rotate_img

bmp.o: bmp.c
	$(CC) -c $(CFLAGS) $< -o $@

utils.o: utils.c
	$(CC) -c $(CFLAGS) $< -o $@

image.o: image.c
	$(CC) -c $(CFLAGS) $< -o $@

rotate.o: rotate.c
	$(CC) -c $(CFLAGS) $< -o $@

main.o: main.c
	$(CC) -c $(CFLAGS) $< -o $@

rotate_img:  bmp.o utils.o image.o rotate.o main.o
	$(CC) -o rotate_img $^

clean:
	rm -f main.o utils.o bmp.o image.o rotate.o