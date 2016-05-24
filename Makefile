CFLAGS=-Wall -g

all:
	gcc grid.c -o grid.out

clean:
	rm -f grid.out
