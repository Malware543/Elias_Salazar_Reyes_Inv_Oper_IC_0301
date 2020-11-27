all:
	gcc -g -c -Wall main.c -o main.o
	gcc -g -c -Wall metodos.c -o metodos.o
	gcc -g -Wall main.o metodos.o -o ruta
	./ruta

clean:
	rm -r *.o
	rm -r ruta