#include <stdio.h>

int main() {
    int numero = 10;
    int *puntero; // Declaramos un puntero a un entero

    puntero = &numero; // Hacemos que el puntero apunte a la dirección de memoria de numero

    printf("El valor de numero es: %d\n", numero);
    printf("El valor de numero usando el puntero es: %d\n", *puntero);
    printf("La direccion de memoria donde apunta el puntero es: %p \n", &numero);


    return 0;

    /*
    En este ejemplo:

    numero es una variable que almacena el valor 10.
    puntero es un puntero que apunta a un entero.
    &numero es la dirección de memoria de la variable numero.
    *puntero es el valor al que apunta el puntero.
    */
}
