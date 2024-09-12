#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void imprimirCadena(char *cadena);
int main()
{

    /*
    Escribe una función que imprima una cadena de caracteres usando un puntero a char.
    */
    char cadena[25];
    char *ptr;
    printf("Ingrese una palabra:\n");
    fgets(cadena,sizeof(cadena),stdin);

    ptr = cadena;
    imprimirCadena(ptr);

    return 0;
}
//Funcion

void imprimirCadena(char *cadena)
{
    printf("La cadena ingresada es : %s",cadena);
}
