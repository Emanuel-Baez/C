#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaración de un arreglo de 5 enteros
    int vector[5];

    // Inicialización de los primeros tres elementos del arreglo
    vector[0] = 10;
    vector[1] = 11;
    vector[2] = 12;

    // Impresión del primer elemento del arreglo utilizando un puntero
    printf("%d\n", *vector);
    printf("%p\n", vector);

    // Impresión del segundo elemento del arreglo utilizando un puntero
    printf("%d\n", *(vector + 1));
    printf("%p\n", vector+1);

    // Impresión del tercer elemento del arreglo utilizando un puntero
    printf("%d\n", *(vector + 2));
    printf("%p\n", vector+2);

    return 0;
}
