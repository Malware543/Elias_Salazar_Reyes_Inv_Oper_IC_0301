/**
 * @file metodos.c
 * @version 1.0
 * @author Elias Salazar Reyes
 * @date 19-12-2020
 * @brief metodos.c implementacion de los metodos para calcular la linea de espera
*/
#include "LEspera.h"

void imprimirH(int _hInit,int _hFinal){

    for(int i=_hInit;i<_hFinal;i++){
        printf("%i a %i\t\t",i,(i+1));
    }
    printf("\n");
}

void imprimirU(int aux[Max],int _hInit,int _hFinal){

for (int i =_hInit; i < _hFinal; i++)
{
    printf("%i\t\t",aux[i]);
}
printf("\n");
}

void usuaEspera(int _capacidadAten[Max],int _usuarios[Max],int _usuEspera[Max],int _hInit,int _hFinal){
    int i=0;
    _usuEspera[_hInit-1]=0;
    for(i=_hInit;i<_hFinal;i++){
        _usuEspera[i]=_usuarios[i]-_capacidadAten[i]+_usuEspera[i-1];
        if(_usuEspera[i]<=0){
            _usuEspera[i]=0;
        }
    }
}

void input(int _usuarios[Max],int _hInit,int _hFinal){
    int i=0,in=0;
    for(i=_hInit;i<_hFinal;i++){
        in+=_usuarios[i];
        printf("%i\t\t",in);
    }
    printf("\n");
}

void output(int _capacidadAten[Max],int _usuarios[Max],int _usuEspera[Max],int out[Max],int _hInit,int _hFinal){
    int i=0,output=0;
    out[_hInit-1]=0;
    for(i=_hInit;i<_hFinal;i++){
        if(_usuEspera[i]==0){
            output=_usuEspera[i];
            printf("%i\t\t",output);
        } else{
            output=_capacidadAten[i];
            printf("%i\t\t",output);
        }
        out[i]=output+out[i-1];
    }
    printf("\n");
}

void lineas(int _hInit,int _hFinal){
    for(int i=_hInit;i<(_hFinal*2);i++){
        printf("------");
        if(i==(_hInit+2)){
            printf("|");
        }
        if (i==(_hFinal*2)-1)
        {
            printf("|\t");
        }
        
    }
    printf("\n");
}