all: structTest.o
	gcc structTest.o

stryctTest.o: structTest.c
	gcc -c structTest.c

run:
	./a.out
clean:
	rm *.o *.out
