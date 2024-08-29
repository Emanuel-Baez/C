#include <stdio.h>

int main() {
    int numero = 10;
    int *puntero; // Declaramos un puntero a un entero

    puntero = &numero; // Asignamos la direcci�n de memoria de 'numero' al puntero

    printf("El valor de la variable numero es: %d\n", numero);
    printf("La direcci�n de memoria de numero es: %p\n", &numero);
    printf("El valor almacenado en la direcci�n apuntada por puntero es: %d\n", *puntero);
    printf("La direcci�n a la que apunta puntero es: %p\n", puntero);

    return 0;
}
