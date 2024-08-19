#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Desarrolla un programa que permita ingresar 5 numeros y calcule su promedio.
    */
    float acumuladorNumeros = 0;
    float resultado,promedio;
    int contadorNumeros = 0;
    int i = 1;

    for(i =1; i<= 5; i++){

    printf("Ingrese un numero: \n");
    scanf("%f", &acumuladorNumeros);
    resultado += acumuladorNumeros;
    contadorNumeros++;
    //printf("Contador: %d \n", contadorNumeros);
    }
    promedio = resultado / contadorNumeros;
    printf("Promedio: %.0f \n", promedio);
    return 0;
}
