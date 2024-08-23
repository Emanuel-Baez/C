#include <stdio.h>
#include <stdlib.h>
#define TEMP_MAX 3

int main() {
    float temperaturas[TEMP_MAX];
    float acumulador = 0;
    float promedio = 0;

    // Carga de temperaturas
    for (int i = 0; i < TEMP_MAX; i++) {
        printf("Ingresa una temperatura: \n");
        scanf("%f", &temperaturas[i]);
        acumulador += temperaturas[i];
    }

    // Temperaturas máximas y mínimas
    float tempAltaActual = temperaturas[0];
    float tempBajaActual = temperaturas[0];
    for (int i = 1; i < TEMP_MAX; i++) {
        if (temperaturas[i] > tempAltaActual) {
            tempAltaActual = temperaturas[i];
        }
        if (temperaturas[i] < tempBajaActual) {
            tempBajaActual = temperaturas[i];
        }
    }

    // Cálculo de promedio
    promedio = acumulador / TEMP_MAX;

    // Muestra de las temperaturas ingresadas
    for (int i = 0; i < TEMP_MAX; i++) {
        printf(" %d - Temperatura: %.2f grados C°. \n", i, temperaturas[i]);
    }

    // Muestra de promedios por pantalla
    printf("El promedio de las temperaturas es :  %.2f\n", promedio);
    printf("La temperatura máxima es :  %.2f\n", tempAltaActual);
    printf("La temperatura mínima es :  %.2f\n", tempBajaActual);

    return 0;
}
