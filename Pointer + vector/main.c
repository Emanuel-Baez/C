#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaraci�n de un arreglo de 5 enteros
    int vector[5];

    // Inicializaci�n de los primeros tres elementos del arreglo
    vector[0] = 10;
    vector[1] = 11;
    vector[2] = 12;

    // Impresi�n del primer elemento del arreglo utilizando un puntero
    printf("%d\n", *vector);
    printf("%p\n", vector);

    // Impresi�n del segundo elemento del arreglo utilizando un puntero
    printf("%d\n", *(vector + 1));
    printf("%p\n", vector+1);

    // Impresi�n del tercer elemento del arreglo utilizando un puntero
    printf("%d\n", *(vector + 2));
    printf("%p\n", vector+2);

    return 0;
}
