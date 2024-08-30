

#include <stdio.h>
#include <stdlib.h>

int main() {

     /*
    ¿Qué es malloc?
malloc es una función de la biblioteca estándar de C que se utiliza para reservar dinámicamente un bloque de memoria.
Esto significa que, en lugar de declarar una variable con un tamaño fijo al inicio de tu programa,
puedes solicitar memoria adicional durante la ejecución, según tus necesidades.
    */

    //void *: Devuelve un puntero de tipo void, que es un puntero genérico que puede apuntar a cualquier tipo de dato.
    //size_t size: Es un tipo de dato sin signo que representa el número de bytes que quieres reservar.
    void *malloc(size_t size);


    ///////////////////////////////////////////////////////////////////
    int *numeros;
    int n;

    printf("Ingrese la cantidad de números: ");
    scanf("%d",&n);

    // Reservar memoria para n enteros
    numeros = (int*) malloc(n * sizeof(int));

    // Verificar si la asignación de memoria fue exitosa
    if (numeros == NULL) {
        printf("Error: no se pudo asignar memoria.\n");
        return 1;
    }

    // Utilizar la memoria asignada
    for (int i = 0; i < n; i++) {
        numeros[i] = i + 1;
    }

    // Liberar la memoria asignada
    free(numeros);

    return 0;
}
