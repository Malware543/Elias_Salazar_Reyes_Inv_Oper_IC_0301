all:
	gcc -g -c -Wall main.c -o main.o
	gcc -g -c -Wall gnuplot_i.c -o gnuplot_i.o
	gcc -g -Wall main.o gnuplot_i.o -o Principal

clean:
	rm  *.o
	rm -r Principal