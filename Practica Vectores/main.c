#include <stdio.h>
#include <stdlib.h>
#define MAXDATOS 30
int main()
{

    /*
    1 - Ingresar 5 numeros decimales por teclado, almacenarlos en un vector y luego imprimirlos por pantalla.
    2 - Solicitar el ingreso de notas (pueden tener decimales) y almacenarlas en un vector hasta que el usuario ingrese 0
    (se permite un maximo de 30 notas).Luego mostrar por pantalla el listado de notas ingresadas.
    3 - Luego de imprimir las notas del ejercicio anterior, calcular el promedio.

    */


    float numeros[MAXDATOS];
    int i = 1;
    float resultado;
    float acumulador;
    int contador;

    printf("Ingrese notas. Para terminar, ingrese 0.\n");

    while( i< MAXDATOS){

    printf("Ingresa una nota :\n");
    scanf("%f",&numeros[i]);

    acumulador += numeros[i];

     if(numeros[i]== 0){
            break;
        }
     i++;
     contador ++;
    }


    for(i = 1;i <= numeros[i];i++){
     printf(" La %d nota ingresada es : %.2f \n",i,numeros[i]);

    }

    printf("Acumulador : %.2f \n",acumulador);
     printf("Contador : %.2d \n",contador);
    resultado = acumulador / contador;

    printf("Promedio : %.2f \n",resultado);

    return 0;
}
