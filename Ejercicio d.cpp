/*
Programa: Que defina un vector de n�meros y muestre en la salida est�ndar el vector en orden inverso�del �ltimo al primer elemento.
Autor: Alejandro Santiba�ez Sanchez.
Fecha: 16/03/2017
Resumen: Programa que define un vector y muestra en la salida el vector en orden inverso.
*/

#include<stdio.h>

int main(){
    int numero[10] = {1,2,3,4,5,6,7,8,9,10}, i;

    for(i = 9; i >= 0; i--) {
    printf("%d \n",numero[i]);
    }
    return 0;
}
