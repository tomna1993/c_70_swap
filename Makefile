CC := gcc
#CFLAGS := 
DEST := ./build/

all: swap.c
	mkdir -p build
	$(CC) swap.c -o $(DEST)/swap 

debug: swap.c
	mkdir -p build
	$(CC) swap.c -g -o $(DEST)/swap 