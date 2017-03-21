/*
Programa: Define un vector de numeros y calcule la multiplicacion acumulada de sus elementos.
Autor: Alejandro Santibañez Sanchez.
Fecha: 11/03/2017.
Resumen: Programa que dine un vector de numeros y calcula la multiplicacion acumulada de sus elementos.
*/

#include<stdio.h>

int main(){
    int numeros[5]={1,2,3,4,5},multi=1;
    int i;

    for(i = 0;i < 5;i++){
        multi = multi * numeros[i];
    }
    printf("%d \n",multi);

    return 0;
}
