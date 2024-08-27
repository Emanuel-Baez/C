#include <stdio.h>
#include <stdlib.h>

//prototipo
void mostrarDatos(float [], int , float  , float );
float encontrarMaximo(float [] , int);
float encontrarMinimo(float [] , int);
int main()
{

    float vector[10] = {20.5,22.5,23.4,25.4,24.8};



     float maximo = encontrarMaximo(vector,5);
     float minimo = encontrarMinimo(vector,5);
      mostrarDatos(vector,5,maximo,minimo);

    return 0;
}

void mostrarDatos(float num [], int longitud, float maximo , float minimo){

 for(int i = 0; i < longitud ; i++){

    printf("Valor: %.2f \n",num[i]++);


 }
 printf("Maximo: %.2f \n",maximo);
 printf("Maximo: %.2f \n",minimo);
}

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
