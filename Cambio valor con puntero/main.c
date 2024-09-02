#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
    Programa que cambia el valor de las variables de tipo entero accediendo
    a las mismas atraves de un puntero. Muestra el valor de las variables antes
    y despues de modificarlas.
    */
    int numero1 = 10;
    int numero2 = 20;
    int *ptr;

    printf("Primer valor de numero 1: %d\n",numero1);

    printf("Primer valor de numero 2: %d\n",numero2);

    //Puntero apuntando a numero 1.
    ptr = &numero1;
    printf("Posicion de memoria de numero 1 : %p\n",ptr);

    //Modificamos el valor de la variable donde apunta en puntero.
    *ptr = 11;
    //Imprimo el puntero
    printf("Valor modificado de numero 1 : %d\n",*ptr);

     ptr = &numero2;
    printf("Posicion de memoria de numero 2 : %p\n",ptr);

    *ptr = 21;
    printf("Valor modificado de numero 2 : %d\n",*ptr);


    return 0;
}
