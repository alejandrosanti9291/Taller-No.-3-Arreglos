/*
Programa: defina un vector de n�meros y calcule si existe alg�n n�mero en el vector cuyo valor equivale a la suma del resto de n�meros del vector.
Autor: Alejandro Santiba�ez Sanchez
Fecha: 16/03/2017
Resumen: Programa que define un vector de numeros y calcular un numero en el vector que equivalga a la suma de los otros numeros.
*/

#include<stdio.h>

intmain(){

    int numero[6]{2,5,4,24,6,7}, suma = 0, i;

    for(i=0 ;i < 6; i++){
    suma += numero[i];
      }
    for(i = 0; i < 6; i++){
        if((suma - numero[i]) == numero[i]){
        printf("El numero %d es igual a la suma del resto \n",numero[i]);
       }
     }
    return 0;
}
