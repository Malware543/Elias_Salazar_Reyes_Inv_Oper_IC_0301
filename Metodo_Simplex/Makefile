all:
	gcc -g -c -Wall main.c -o main.o
	gcc -g -c -Wall MetodoSimplex.c -o MetodoSimplex.o
	gcc -g -c -Wall gnuplot_i.c -o gnuplot_i.o
	
crear: main.o MetodoSimplex.o gnuplot_i.o
	gcc -o simplex main.o MetodoSimplex.o gnuplot_i.o 

clean:
	rm -r *.o
	rm -r simplex	

	## instrucciones de ejecucion

	##poner en la terminal 
	##para compilar solo debes de escribir mingw32-make
	##para ejecutar los demas comandos debes de escribir esto + el comando