#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int main()
{
    /*
    Desarrolla un programa que imprima por pantalla los numeros del 1 al 10.
    modifica el programa para que solo muestre valores pares.
    */

    int i = 1;
        for(i=1; i<=MAX; i++){
                if(i % 2 == 0){
         printf("Indice: %d , valor: %d \n",i,i);
                }

        }

    return 0;
}
