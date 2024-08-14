#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Desarrolla un programa que calcule e informe por pantalla el promedio de 4 notas que
    seran ingresadas por el usuario.
    */
    float notas = 0;
    float acumulador = 0;
    int contador = 0;
    float resultado = 0;

    printf("Ingrese la primer nota: \n");
    scanf("%f",&notas);
    acumulador = acumulador + notas;
    contador ++;


    printf("Ingrese la segunda nota: \n");
    scanf("%f",&notas);
    acumulador = acumulador + notas;
    contador ++;


    printf("Ingrese la tercer nota: \n");
    scanf("%f",&notas);
    acumulador = acumulador + notas;
    contador ++;


    printf("Ingrese la cuarta nota: \n");
    scanf("%f",&notas);
    acumulador = acumulador + notas;
    contador ++;

    resultado = acumulador / contador;
    printf("La suma total de sus notas es : %.2f \n",acumulador);

    printf("Su promedio es de : %.2f \n",resultado);

    return 0;
}
