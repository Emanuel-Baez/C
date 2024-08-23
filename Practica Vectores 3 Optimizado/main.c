#include <stdio.h>
#include <stdlib.h>
#define TEMP_MAX 3

// Prototipo de la función
void ingresarTemperaturas(float[], int);
void mostrarResultados(float [], int,float,float,float );
float calcularPromedio(float [], int);
float encontrarMaximo(float[], int );
float encontrarMinimo(float[], int );

int main() {
    float promedio=0;
    float maximo=0;
    float minimo = 0;
    float temperaturas[TEMP_MAX];

    //LLAMADA FUNCIONES
   ingresarTemperaturas(temperaturas, TEMP_MAX);
   promedio = calcularPromedio(temperaturas,TEMP_MAX);
   maximo = encontrarMaximo(temperaturas,TEMP_MAX);
   minimo = encontrarMinimo(temperaturas,TEMP_MAX);
   mostrarResultados( temperaturas, TEMP_MAX,promedio,maximo,minimo);

    return 0;

}

//DECLARACION DE FUNCIONES:

//CARGA DE TEMPERATURAS AL VECTOR.
void ingresarTemperaturas(float temperaturas[], int tamano) {
    for (int i = 0; i < tamano; i++) {
        printf("Ingresa una temperatura: \n");
        scanf("%f", &temperaturas[i]);
    }
}

//calcular promedio:

float calcularPromedio(float temperaturas[], int tamano) {
    float acumulador = 0;
    float promedio = 0;
    for (int i = 0; i < tamano; i++) {
        acumulador += temperaturas[i];
    }
    return promedio = acumulador / tamano;
}

//ENCONTRAR MAXIMO

float encontrarMaximo(float temperaturas[], int tamano) {
    float maximo = temperaturas[0];
    for (int i = 1; i < tamano; i++) {
        if (temperaturas[i] > maximo) {
            maximo = temperaturas[i];
        }
    }
    return maximo;
}

//ENCONTRAR MINIMO

float encontrarMinimo(float temperaturas[], int tamano) {
    float minimo = temperaturas[0];
    for (int i = 1; i < tamano; i++) {
        if (temperaturas[i] < minimo) {
            minimo = temperaturas[i];
        }
    }
    return minimo;
}
//MOSTRAR RESULTADOS

void mostrarResultados(float temperaturas[], int tamano, float promedio,float maximo,float minimo) {
    for (int i = 0; i < tamano; i++) {
        printf(" %d - Temperatura: %.2f grados C°. \n", i, temperaturas[i]);
    }
      printf("El promedio de las temperaturas es :  %.2f\n", promedio);
      printf("La temperatura máxima es :  %.2f\n", maximo);
      printf("La temperatura mínima es :  %.2f\n", minimo);

}
