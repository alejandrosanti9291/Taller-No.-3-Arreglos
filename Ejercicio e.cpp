/*
Programa: Que lea de la entrada estandar un vector de enteros y  determine el mayor elemento del vector.
Autor: Alejandro Santibañez Sanchez.
Fecha: 11/03/2017.
Resumen: Programa que lee de la entrada estandar un vector de enteros y determina el mayor elemento.
*/

#include<stdio.h>

int main(){
    int numeros[100],num, mayor=0;

    printf("Ingrese el numero de enteros del vector \n");
    scanf("%d", &num);

    for(int i=0;i < num;i++){
        printf("Ingrese el numero %d \n",i+1);
        scanf("%d", &numeros[i]);

        if(numeros[i] > mayor ){
            mayor = numeros[i];
        }
    }
    printf("El numero mayo es %d \n", mayor);

    return 0;
}
