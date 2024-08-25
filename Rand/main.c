  #include <stdio.h>
#include <stdlib.h>
#include <time.h>





int main() {
    // Inicializar la semilla
    srand(time(NULL));

    // Generar 5 números aleatorios entre 1 y 20
    for (int i = 0; i < 5; i++) {
        int numero = 1 + rand() % 20;
        printf("Número aleatorio: %d\n", numero);
    }

    return 0;
}







