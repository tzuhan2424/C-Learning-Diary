CC=gcc
CFLAGS=-Wall
OBJ=primeHelper.o main.o

prime: $(OBJ)
	$(CC) -o $@ $^

primeHelper.o: primeHelper.c primeHelper.h
	$(CC) -c -o $@ primeHelper.c $(CFLAGS)

main.o: main.c primeHelper.h
	$(CC) -c -o $@ main.c $(CFLAGS)

clean:
	rm -f $(OBJ) prime
