#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{

    /*
    Strcat :
    Este metodo concatena una cadena a la otra.

    */

    char strOrigen[5];

    char strDestino[20];

   char concatenados[50];

    printf("Ingrese una palabra: \n");
    fgets(strOrigen,20,stdin);
     printf("Ingrese una palabra: \n");
    fgets(strDestino,20,stdin);

    strcat(strOrigen,strDestino);

    printf("Concatenados: %s ",strOrigen);

    return 0;
}
