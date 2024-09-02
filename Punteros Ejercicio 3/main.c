#include <stdio.h>
#include <stdlib.h>

int main() {

    int vector[5];
    int *ptr = vector; // Puntero al inicio del arreglo
    int suma = 0;

    // Llenar el arreglo
    for (int i = 0; i < 5; i++) {
        printf("Ingrese el %d numero: ", i + 1);
        scanf("%d", &vector[i]); // Pasar la dirección del elemento específico
    }

    // Calcular la suma y no avanzar el puntero aquí
    //int *ptr2 = vector; // Puntero al inicio del arreglo para calcular la suma
    for (int i = 0; i < 5; i++) {
        suma += *ptr; // Desreferenciar el puntero para obtener el valor
        ptr++; // Avanzar al siguiente elemento
    }

    // Reiniciar el puntero al inicio del arreglo para imprimir los valores
   // ptr = vector;
    for (int i = 0; i < 5; i++) {
        printf("Valor ingresado %d : %d\n", i, *ptr);
        ptr++; // Avanzar al siguiente elemento
    }

    printf("La suma de los numeros es: %d\n", suma);

    return 0;
}
