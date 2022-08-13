CC=gcc
CFLAGS=-Wall -Wextra -Werror -std=c99
NAME=rn

OBJECT_FILES=main.o error_handling_rn.o
all: error_handling_rn.o main.o
	$(CC) $(CFLAGS) -o $(NAME) $(OBJECT_FILES)

main.o: main.c
	$(CC) $(CFLAGS) -c main.c -o main.o

error_handling_rn.o: error_handling_rn.c
	$(CC) $(CFLAGS) -c error_handling_rn.c -o error_handling_rn.o

