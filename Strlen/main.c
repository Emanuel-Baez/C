#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    /*strlen: funcion de la libreria string.h
    devuelve la cantidad de caracteres.
    */

    char len[10];
    int cantCaracteres ;
    printf("Ingrese una palabra:\n");
    fgets(len,10,stdin);

    cantCaracteres = strlen(len);
    printf("Cantidad de caracteres: %d \n",cantCaracteres);
    return 0;
}
