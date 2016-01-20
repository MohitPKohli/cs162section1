main: main.o dog.o
	gcc -g main.o dog.o -o main

main.o: main.c
	gcc -g -c main.c
dog.o: dog.c
	gcc -g -c dog.c

clean:
	rm -rf *.o main
