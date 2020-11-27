/**
 * @file metodos.c
 * @version 1.0
 * @author Elias Salazar Reyes
 * @date 29-10-2020
 * @brief Metodos
*/
#include "metodos.h"

void init(int aristas,int array[max][max]){
    for (int i = 0; i < aristas; i++)
    {
        for (int j = 0; j < aristas; j++)
        {
            array[i][j]=0; 
        }
    }
}

void llenado(int aristas,int array[max][max]){
    char xy[max]="xy";
    printf("---------------Llenado de abyasencias---------------\t\n");
    for (int i = 0; i < aristas; i++)
    {
        for (int j = 0; j < 2; j++)
        {        
        printf("%c:",xy[j]);
        scanf("%d",&array[i][j]);
        }
    }
}

int findStreet(int aristas,int inicio,int fin,int array[max][max],int aux2,int aux){
    int finall=0;
    aux=inicio;
    aux2=0;
    do
    {
        inicio=aux;
     for (int i = 0; i < aristas; i++){
         for (int j = 0; j < 2; j++)
         {
               if (inicio==array[i][0]){
                   aux=array[i][1];
                   if (aux==fin){
                       aux2=aristas;
                        finall=fin;
                   }
               } 
         }
       }
       aux2++;
    } while (aux2<aristas);
return finall;
}

void impresion(int aristas,int array[max][max]){
    printf("---------------Matriz de adyasencias---------------\t\n");
  for (int i = 0; i < aristas; i++)
    {
        for (int j = 0; j < 2; j++)
        {
        printf("[%d]\t",array[i][j]);
        }
        printf("\n");
    }
     
}

void existencia(int fin,int finall){
    printf("----------------!Existe o no¡-----------------\t\n");
    if (fin==finall)
    {
        printf("Existe camino\n");
    }else
    {
        printf("No existe camino\n");
    }
}
