/*
Programa: Escribe un programa que lea de la entrada estandar de un vector de numeros y muestre la salida estandar los numeros del vector con sus indices asociados.
Autor: Alejandro Santibañez Sanchez.
Fecha: 11/04/2017.
Resumen: Entrada estandar de numero que lee la entrada estrandar de numeros y muestra la salida estandar del vector con sus indices asociados.
*/

#include<stdio.h>

int main(){
    int numero[100],n;
    int i;

    printf("Ingrese los elementos que va a tener el arreglo \n");
    scanf("%d",&n);

    for(i = 0;i < n;i++){
        printf("Ingrese un numero \n");
        scanf("%d",&numero[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d %d \n",i,numero[i]);
    }
    return 0;
}
