#include "gnuplot_i.h"

/**
 * @file mian.c 
 * @version 1.0.0
 * @date 23 de noviembre de 2020
 * @author Elias Salazar Reyes
 * @brief Programa para graficar ecuaciones lineales.
*/

/**
 * @brief Función principal
 * @return void.
*/
int main(){
    int m=0, b=0;
    int ran1=0 , ran2=0;

    printf("Deme el valor de m: ");
    scanf("%d",&m);
    printf("Deme el valor de b: ");
    scanf("%d",&b);
    printf("Deme el rango de inicio: ");
    scanf("%d",&ran1);
    printf("Deme el rango final: ");
    scanf("%d",&ran2);
    
    impresionPuntos(ran1,ran2,m,b);
    gnuplotT(m,b,ran1,ran2);
    return 0;
}
