/*
Programa: Define dos vectores de caracteres y después almacene el contenido de ambos vectores en un nuevo vector, situando en primer lugar los elementos del primer vector seguido por los elementos del segundo vector. Muestre el contenido del nuevo vector en la salida estándar
Autor:
Fecha:
Resumen: Programa que define dos vecrotes de caracteres y luego los guarda en un tercer vector mostrando primero los elementos del vector uno y luego el del dos.
*/

#include<stdio.h>

int main(){
    char nombre[]={'a','l','e','j','o'};
    char apellido[]={'s','a','n','t','i'};
    char completo[10];

    for(int i = 0;i < 5;i++){
       completo[i]=nombre[i];
    }
    for(int i = 5;i < 10;i++){
        completo[i]=apellido[i-5];
    }
    for(int i=0;i < 10;i++){
        printf("%c \b",completo[i]);
    }
    return 0;
}
