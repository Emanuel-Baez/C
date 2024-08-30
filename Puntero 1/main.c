#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero= 7;

    int *puntero;

    puntero = &numero;

    //Obtengo la direccion de memoria de la variable numero.
    printf("\n Direccion de memoria de la variable numero: %p",&numero);

    //Obtengo la direccion de memoria de lo que contiene el puntero.

    printf("\n Direccion de memoria de lo que contiene el puntero: %p",puntero);

     //Yo puedo imprimir lo que contiene la variable numero utilizando el puntero.
     // Esto imprime el contenido que tiene la direccion de memoria a la que apunta puntero.
      printf("\n Contenido de la variable : %d",*puntero);






    return 0;
}
