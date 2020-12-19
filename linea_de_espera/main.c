/**
 * @file main.c
 * @version 1.0
 * @author Elias Salazar Reyes
 * @date 19-12-2020
 * @brief funcion principal
*/
#include "LEspera.h"


int main(){
    int hInit,hFinal,aten,i=0,op=0;
    //arreglos 
    int usuarios[Max],usuEspera[Max];
    int cajas[Max],capacidadAten[Max];
    int out[Max];

    do{
    //solicitar datos
    printf("linea de espera\n\n\t");
    printf("Horas(1-24)\n");
    printf("Hora de inicio:");
    scanf("%i",&hInit);
    printf("\nHora final:");
    scanf("%i",&hFinal);
    printf("\nvelocidad de atencion:");
    scanf("%i",&aten);

    for(i=hInit;i<hFinal;i++){
        printf("\nhoras %i a %i",i,(i+1));
        printf("\nUsuarios en espera:");
        scanf("%i",&usuarios[i]);
        printf("\nNumero de cajas abiertas:");
        scanf("%i",&cajas[i]);
        //calclando velocidad
        capacidadAten[i]=cajas[i]*aten;
    }

    //impresion de tabla
    printf("\n");
    lineas(hInit,hFinal);
    printf("\t\t\tTabla de espera\t\t\t\n");
    lineas(hInit,hFinal);
    printf("\nHoras\t\t\t");
    imprimirH(hInit,hFinal);
    lineas(hInit,hFinal);
    printf("\nLegada de clientes\t");
    imprimirU(usuarios,hInit,hFinal);
    lineas(hInit,hFinal);
    printf("\nN cajas abiertas\t");
    imprimirU(cajas,hInit,hFinal);
    lineas(hInit,hFinal);
    printf("\nCapacidad salidas\t");
    imprimirU(capacidadAten,hInit,hFinal);
    lineas(hInit,hFinal);
    printf("\nSalidas de cliente\t");
    usuaEspera(capacidadAten,usuarios,usuEspera,hInit,hFinal);
    output(capacidadAten,usuarios,usuEspera,out,hInit,hFinal);
    lineas(hInit,hFinal);
    printf("\nCola de espera\t\t");
    imprimirU(usuEspera,hInit,hFinal);
    lineas(hInit,hFinal);
    printf("\nInput\t\t\t");
    input(usuarios,hInit,hFinal);
    lineas(hInit,hFinal);
    printf("\nOutput\t\t\t");
    imprimirU(out,hInit,hFinal);
    lineas(hInit,hFinal);

    printf("\nDesea introducir mas datos? 1=si, no=0\n");
    scanf("%i",&op);
    }while(op!=0);

    return 0; 
} 
