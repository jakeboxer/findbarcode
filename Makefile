all: findbarcode.out

findbarcode.out: findbarcode.o
	gcc findbarcode.o -o findbarcode.out

findbarcode.o: findbarcode.c
	gcc -c findbarcode.c

clean:
	rm -rf *.o findbarcode.out
