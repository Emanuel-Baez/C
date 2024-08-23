#include <stdio.h>
#include <stdlib.h>

int main()
{

/*
Desarrollar un programa que al ingresar una plabra por teclado , informe la cantidad de vocales que tiene. (a-e-i-o-u)
*/
    char cadena [20];
    int cantVocales =0;

    printf("Ingrese una cadena!\n");
    fgets(cadena,20,stdin);

    for(int i = 0; cadena[i] != '\0';i++){
        char c = tolower(cadena[i]);

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            cantVocales++;
        }
    }


    printf("Cadena ingresada : %s \n",cadena);

    printf("Cantidad de vocales : %d \n",cantVocales);
    return 0;
}
