CC=gcc
CFLAGS=-Wall -Wextra -Werror -std=c99
NAME=rn
all:
	$(CC) $(CFLAGS) -o $(NAME) main.c
