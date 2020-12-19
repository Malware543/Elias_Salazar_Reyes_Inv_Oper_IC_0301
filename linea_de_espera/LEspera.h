/**
 * @file LEspera.h
 * @version 1.0
 * @author Elias Salazar Reyes
 * @date 19-12-2020
 * @union LEspera.h
 * @brief LEspera.h cabezera con funciones para calcular un linea de espera.
*/

#ifndef _LEspera_H
#define _LEspera_H
#define Max 24

#include <stdio.h>

/**
 * @brief imprimirH Imprime el rango de horas.
 * @param _hInit Inicio de rango de horas.
 * @param _hFinal Fin de rango de horas.
 * @return void
*/
void imprimirH(int _hInit,int _hFinal);

/**
 * @brief imprimirU Imprime la informacion de los arreglos de los usuarios.
 * @param aux Arreglo a imprimir. 
 * @param _hInit Inicio de rango de horas.
 * @param _hFinal Fin de rango de horas.
 * @return void
*/
void imprimirU(int aux[Max],int _hInit,int _hFinal);

/**
 * @brief usuaEspera calcula la cantidad de usuarios que estan en espera.
 * @param _capacidadAten Arreglo con la informacion de capacidad de atencion.
 * @param _usuarios Usuarios de entrada.
 * @param _usuEspera Usuarios en la fila de espera.
 * @param _hInit Inicio de rango de horas.
 * @param _hFinal Fin de rango de horas.
 * @return void
*/
void usuaEspera(int _capacidadAten[Max],int _usuarios[Max],int _usuEspera[Max],int _hInit,int _hFinal);

/**
 * @brief input calcula la entrada de usuarios.
 * @param _usuarios Usuarios de entrada. 
 * @param _hInit Inicio de rango de horas.
 * @param _hFinal Fin de rango de horas.
 * @return void
*/
void input(int _usuarios[Max],int _hInit,int _hFinal);

/**
 * @brief output calcula la salida de los usuarios.
 * @param _capacidadAten Arreglo con la informacion de capacidad de atencion.
 * @param _usuarios  Usuarios de entrada.
 * @param _usuEspera Usuarios en la fila de espera.
 * @param out Arreglo de salida
 * @param _hInit Inicio de rango de horas.
 * @param _hFinal Fin de rango de horas.
 * @return void
*/
void output(int _capacidadAten[Max],int _usuarios[Max],int _usuEspera[Max],int out[Max],int _hInit,int _hFinal);

/**
 * @brief lineas Imprime los estilos de la tabla..
 * @param _hInit Inicio de rango de horas.
 * @param _hFinal Fin de rango de horas.
 * @return void
*/
void lineas(int _hInit,int _hFinal);

#endif
