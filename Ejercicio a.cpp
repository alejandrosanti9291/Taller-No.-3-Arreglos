/*
Programa: Que defina un vector de numeros y luego los sume.
Autor: Alejandro Santibañes Sanches.
Fecha: 11/04/2017.
Resumen: Programa que define un vector de numeros y posteriomente los suma.
*/

#include<stdio.h>

int main(){
    int numeros[5]={1,2,3,4,5};
    int suma=0;

    for( int i=0;i<5;i++){
        suma = suma + numeros [i];
    }

    printf("La suma de los elementos del vector es %d \n", suma);

    return 0;
}
