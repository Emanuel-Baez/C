#include <stdio.h>
#include <stdlib.h>


int sumar(int*,int*);
int main()
{
    int numero1 = 10;
    int numero2 = 30;
    int resultado = 0;
    int *puntero;
    int *puntero1;
    puntero = &numero1;
    puntero1 = &numero2;
    resultado = sumar(puntero,puntero1);
    printf("%d",resultado);

    return 0;
}


int sumar(int *numero1,int *numero2)
{
    int resultado = 0;
    resultado = *numero1 + *numero2;
    return resultado;
}
