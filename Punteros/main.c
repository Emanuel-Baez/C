#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Un puntero es una variable que almacena la direccion de memoria de otra variable.
    //Un puntero apunta a una direccion de memoria de una variable.
    int numero= 0;
    printf("Ingrese un numero:\n");
    scanf("%d",&numero);

    //Direccion de memoria del numero ingresado:

    printf("%p",&numero);


    return 0;
}
