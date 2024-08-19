#include <stdio.h>
#include <stdlib.h>
#define MAX 15
int main()
{
    //ESTRUCTURA ITERATIVA: FOR
    int i;
    int resultado;
    for(i = 1;i <= MAX; i++){
    resultado = i *2 ;
    printf("Indice %d : numero : %d\n",i,resultado);
    }
    return 0;
}
