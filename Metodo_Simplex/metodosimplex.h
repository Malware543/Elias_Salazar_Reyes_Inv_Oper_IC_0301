/**
 * @file metodosimplex.h
 * @version 1.0
 * @author Elias Salazar Reyes
 * @union metodosimplex.h
 * @brief Funciones principales
*/

#ifndef __METODOSIMPLEX_H
#define __METODOSIMPLEX_H

#include <stdio.h>
#include <stdlib.h>
#include "gnuplot_i.h"

#define MAX 10
#define LIM 5

/**
*@brief imprimir_tabla_simplex_uno sirve para calcula la primer tabla de restricciones
*@param num Es el primer arreglo, o en otras palabras las variables.
*@param num_dos Es el segundo arreglo, o en otras palabras las restricciones.
*@param num_tres Es el tercer arreglo, o mas facil son las constates.
*@param v Numero de variables.
*@param r Numero de restricciones.
*@return void.
*/

void imprimir_tabla_simplex_uno(float num[LIM],float num_dos[LIM][LIM],float num_tres[LIM],int v,int r);
/**
*@brief imprimir_tabla_simplex_dos sirve para calcula la segunda tabla de restricciones
*@param num Es el primer arreglo, o en otras palabras las variables.
*@param num_dos Es el segundo arreglo, o en otras palabras las restricciones.
*@param num_tres Es el tercer arreglo, o mas facil son las constates.
*@param v Numero de variables.
*@param r Numero de restricciones.
*@param z2 valor de z;
*@return void.
*/
void imprimir_tabla_simplex_dos(float num[LIM],float num_dos[LIM][LIM],float num_tres[LIM],int v,int r,float z2);
/**
*@brief buscar_menor Como su nombre lo dice es que busca el numero menor de la tabla.
*@param num Es el primer arreglo, o en otras palabras las variables.
*@param v Numero de variables.
*@return menor.
*/
int buscar_menor(float num[LIM],int v);
/**
*@brief buscar_posicion Se encarga de buscar la posicion del numero menor.
*@param num Es el primer arreglo, o en otras palabras las variables.
*@param v Numero de variables.
*@return aux.
*/
int buscar_posicion(float num[LIM],int v);
/**
*@brief buscar_menor2 Como el nombre lo dice busca el numero menor en la segunda de la tabla. 
*@param num Es el primer arreglo, o en otras palabras las variables.
*@param v Numero de variables.
*@return menor.
*/
int buscar_menor2(float num[LIM],int v);
/**
*@brief buscar_posicion2 Se encarga de buscar la posicion del numero menor en la segunda tabla.
*@param num Es el primer arreglo, o en otras palabras las variables.
*@param v Numero de variables.
*@return aux.
*/
int buscar_posicion2(float num[LIM],int v);
/**
*@brief columna_pivote Se encarga de encontrar donde se encuentran los valores menores en las columnas.
*@param num Es el primer arreglo, o en otras palabras las variables.
*@param r Numero de restricciones.
*@param aux posicion de los valores menores.
*@return void.
*/
void columna_pivote(float num[LIM][LIM], int r,int aux);
/**
*@brief fila_pivote Se encarga de encontrar donde se encuentran los valores menores en las filas.
*@param num Es el primer arreglo, o en otras palabras las variables.
*@param num_dos Es el segundo arreglo, o en otras palabras las restricciones.
*@param rcons Es un arreglo auxiliar para la guardar la division entre las restricciones entre las variables.
*@param r Numero de restricciones.
*@param aux posicion de los valores menores.
*rerturn void.
*/
void fila_pivote(float num[LIM][LIM],float num_dos[LIM],float rcons[LIM],int r,int aux);
/**
*@brief elemento_pivote Calcula cual es el elemento pivote con respesto a las tablas.
*@param num Es el primer arreglo, o en otras palabras las variables.
*@param aux2 Valor auxiliar para las posiciones. 
*@param aux Posicion de los valores menores.
*@return void.
*/
void elemento_pivote(float num[LIM][LIM],int aux2,int aux);
/**
*@brief nueva_fila_pivote Se encarga de calcular la nueva fila pivote que resulta de dividir elemento pivote por los valores de las tablas.
*@param nfp Arreglo auxiliar que guarda los nuevos datos de las variables.
*@param nfp2 Arreglo auxiliar que guarda los nuevos datos de las restricciones.
*@param num Es el primer arreglo, o en otras palabras las variables.
*@param num_dos Es el segundo arreglo, o en otras palabras las restricciones.
*@param aux2 Variable auxiliar para las posiciones.
*@param aux Variable auxiliar para las posiciones.
*@param v Numero de variables.
*@return void.
*/
void nueva_fila_pivote(float nfp[LIM][LIM],float nfp2[LIM],float num[LIM][LIM],float num_dos[LIM],int aux2,int aux,int v);
/**
*@brief obtener_nueva_tabla Recolecta los datos para la elavoración de la segunda tabla pivote
*@param funcion Es el primer arreglo, o en otras palabras las variables.
*@param resctriccion Es el segundo arreglo, o en otras palabras las restricciones.
*@param constante Es el tercer arreglo, o mas facil son las constates.
*@param menor Numero menor de la tabla pivote.
*@param nfp Arreglo auxiliar que guarda los nuevos datos de las variables.
*@param nfp2 Arreglo auxiliar que guarda los nuevos datos de las restricciones.
*@param v Numero de variables.
*@param r Numero de restricciones.
*@param aux2 Valor auxiliar para las posiciones.
*@param aux Posicion de los valores menores.
*@return void.
*/
void obtener_nueva_tabla(float funcion[LIM],float restriccion[LIM][LIM],float constante[LIM],float menor,float nfp[LIM][LIM],float nfp2[LIM],int v,int r,int aux2,int aux);
/**
*@brief obtener_resultado_z calcula el valor de la funcion de z.
*@param z2 Valor de la funcion de z.
*@param num Es el primer arreglo, o en otras palabras las variables.
*@param menor Numero menor de la tabla pivote.
*@param aux2 Variable auxiliar para las posiciones.
*@return z2.
*/
int obtener_resultado_z(float z2,float num[LIM],float menor,int aux2);

/**
*@brief graficar como su nombre lo dice grafica las restricciones.
*@param num Es el primer arreglo, o en otras palabras las variables.
*@param num_dos Es el segundo arreglo, o en otras palabras las restricciones.
*@param v Numero de variables.
*@param r Numero de restricciones.
*@return void.
*/
void graficar(float num[LIM],float num_dos[LIM][LIM],int r,int v);

#endif
