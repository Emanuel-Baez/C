#include <stdio.h>
#include <stdlib.h>

void incrementar(int*);
int main()
{
    int numero = 10 ;
    int *puntero;
    puntero = &numero;
    printf("Antes de incrementar : %d \n",numero);
    incrementar(puntero);
    printf("Despues de incrementar : %d \n",numero);

    return 0;
}
void incrementar (int *puntero){
(*puntero)++;
}
