#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = 8;
    printf("%p \n",&numero);


    //Declaramos un puntero y le asignamos la direccion de memoria de la variable numero.
    int *puntero;
    puntero = &numero;
    printf("%p \n",puntero);

    //Imprimimos el valor de la variable donde apunta el puntero.
    printf("%d \n",*puntero);


    float numeroFlotante = 8.5;
    printf("Direccion de memoria de la variable numeroFlotante: %p \n",&numeroFlotante);

    float *punteroFlotante;
    punteroFlotante = &numeroFlotante;
    printf("Direccion de memoria de la variable numeroFlotante que fue asignada a la variable punteroFlotante: %p \n",punteroFlotante);

    printf("Valor que contiene la variable donde apunta el puntero: %.1f \n",*punteroFlotante);

    return 0;
}
