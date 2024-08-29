#include <stdio.h>

int main() {
    int numero = 10;
    int *puntero; // Declaramos un puntero a un entero

    puntero = &numero; // Asignamos la dirección de memoria de 'numero' al puntero

    printf("El valor de la variable numero es: %d\n", numero);
    printf("La dirección de memoria de numero es: %p\n", &numero);
    printf("El valor almacenado en la dirección apuntada por puntero es: %d\n", *puntero);
    printf("La dirección a la que apunta puntero es: %p\n", puntero);

    return 0;
}
