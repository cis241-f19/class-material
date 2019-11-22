CC = gcc
CFLAGS = -Wall

program: program.o sum.o
	$(CC) $(CFLAGS) -o $@ $^

program.o : program.c sum.h
	$(CC) $(CFLAGS) -c program.c

sum.o : sum.c sum.h
	$(CC) $(CFLAGS) -c sum.c

clean:
	rm program.o sum.o program
