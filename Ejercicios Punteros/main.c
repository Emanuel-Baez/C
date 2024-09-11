#include <stdio.h>
#include <stdlib.h>

void incrementarContador(int*);
void mostrarContador(int*);
int main()
{
    /*Realizar un programa donde se comparta un contador entre el main y sus funciones. El contador debe
pertenecer al espacio de memoria del main, debe haber una función que solo incremente el contador
recibido por referencia, y otra función que muestre el contador por referencia.*/
int numero = 10;
int *puntero;
puntero = &numero;


incrementarContador(puntero);
mostrarContador(puntero);





    return 0;
}

void incrementarContador(int *puntero){

(*puntero)++;

}

void mostrarContador(int *puntero){

    printf("Numero incrementado: %d\n",*puntero);
}
