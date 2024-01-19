CC = gcc
CFLAGS = -Wall -Wextra -std=c11

all: main

main: main.c fonctions.c
	$(CC) $(CFLAGS) -o main main.c fonctions.c -lm

run: main
	./main

clean:
	rm -f main
