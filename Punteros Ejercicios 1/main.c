#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Crea un programa en C que:

Declare una variable entera llamada numero.
Asigne un valor a numero.
Declare un puntero a entero llamado ptr.
Asigne la dirección de memoria de numero a ptr.
Imprima el valor de numero usando tanto la variable numero como el puntero ptr.
    */
    int numero = 4;
    int *ptr;
    ptr = &numero;
    printf(" Valor de numero imprimiendo directamente la variable numero: %d \n",numero);
    printf(" Valor de numero imprimiendo el puntero que apunta a la variable numero: %d  \n", *ptr);
    return 0;
}
