#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
    1 - Ingresar 5 numeros decimales por teclado, almacenarlos en un vector y luego imprimirlos por pantalla.
    2 - Solicitar el ingreso de notas (pueden tener decimales) y almacenarlas en un vector hasta que el usuario ingrese 0
    (se permite un maximo de 30 notas).Luego mostrar por pantalla el listado de notas ingresadas.
    3 - Luego de imprimir las notas del ejercicio anterior, calcular el promedio.
    4 - Realizar un programa que solicite el ingreso de temperaturas del ambiente (°c) que se fueron registrando a lo largo
    del dia (maximo 10 temperaturas) y las almacene en un vector. Al finalizar imprimirlas por pantalla e indicar la temperatura minima, maxima y
    promedio.
    */


    float numeros[5];

int i = 0;
    for(i = 1;i <= 5;i++){

    printf("Ingresa una nota :\n");
    scanf("%f",&numeros[i]);
    }


    for(i = 1;i <= 5;i++){

        if(numeros[i]== 0){
            break;
        }else{
             printf(" La %d nota ingresada es : %.2f \n",i,numeros[i]);

        }


    }

    return 0;
}
