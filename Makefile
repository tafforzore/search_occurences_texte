CC = gcc
CFLAGS = -Wall -Wextra -std=c11

all: main

main: main.c fonctions.c
	$(CC) $(CFLAGS) -o main main.c fonctions.c

clean:
	rm -f main
