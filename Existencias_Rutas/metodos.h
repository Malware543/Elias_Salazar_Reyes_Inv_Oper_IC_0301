/**
 * @file metodos.h
 * @version 1.0
 * @author Elias Salazar Reyes
 * @date 29-10-2020
 * @union metodos.h
 * @brief Funciones principales
*/

#ifndef metodos_H
#define metodos_H
#define max 100

#include <stdio.h>

int array[max][max];
int inicio,fin,aristas,aux,aux2,finall;
int op;

//funciones principales
/**
 * @brief init Inicializa los espacios necesarios para su ejecución de la matriz bidimensional.
 * @param aristas Como su nombre lo dice, es el numero de aristas que contiene el grafo a usar.
 * @param array Es el arreglo bidimensional que se encarga de guardar las coordenadas ingresadas por el usuario.
 * @return void.
*/
void init(int aristas,int array[max][max]);
/**
 * @brief llenado Solicita las adyasencias que hay en el grafo que se esta utilizando. 
 * @param aristas En esta ocasion las aristas se utilizan para solicitar el numero de adyasencias del grafo.
 * @param array Se llena las posiciones con las adyacencias ya antes solicitadas.
 * @return void.
 */
void llenado(int aristas,int array[max][max]);
/**
 * @brief findStreet Motor del programa, se encarga de comparar si las coordenadas a buscar tienen un camino para encontrarse.
 * @param aristas Se ocupa para el numero de recorridos que debe de dar la comparación.
 * @param inicio Es la cordena inicial que se solicita al usuario.
 * @param fin ES la coordenada final que se va a comparar con el inicio.
 * @param array Se utiliza para comparar cada uno de los valores guarduardados con las coordenadas de inicio y fin.
 * @param aux2 Se iguala al numero de aristas para salir de ciclo do-while. 
 * @param aux Se utiliza para guardar el valor encontrado para compararlo con la coordenada final.
 * @return Regresa el numero final en el recorrido de los caminos.
*/
int findStreet(int aristas,int inicio,int fin,int array[max][max],int aux2,int aux);
/**
 * @brief Impresión imprime la matriz de adyasencia del grafo ocupado.
 * @param aristas se utiliza para el numero de veces que van a imprimir los datos del arreglo.
 * @param array matriz donde se almacenaron los valores ingresados.
 * @return void.
*/
void impresion(int aristas,int array[max][max]);
/**
 * @brief Compra los resultados obtenidos y si son iguales quiere decir que existe un camino.
 * @param fin Es la coordenada final a comparar para determinar si existe un camino o no.
 * @param finall Es el valor obtenido de la búsqueda de las rutas, se compara con fin para determinar si existe o no camino.
 * @return void.
*/
void existencia(int fin,int finall);

#endif