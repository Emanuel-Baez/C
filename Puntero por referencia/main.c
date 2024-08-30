#include <stdio.h>
#include <stdlib.h>


void incrementarNumero(int *);
int main()
{
    int numero = 1;
    int *puntero ;
    //Le asignamos la direccion de memoria de la variable numero.
    puntero = &numero;
    printf("Salida numero : %d\n",numero);
    incrementarNumero(puntero);
    printf("Salida numero despues de incrementar : %d\n",   numero);
    return 0;
}

 void incrementarNumero (int *puntero){
    *puntero++;
}
