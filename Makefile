all: example.c testy.o
	gcc -o example example.c testy.o

testy.o: testy.h testy.c
	gcc -c testy.c

clean:
	@rm -fv *.o example
