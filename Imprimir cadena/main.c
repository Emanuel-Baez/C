#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//Prototipo:

void convertirAmayuscula(char[]);
int main()
{
    /*
    Escribe una función que imprima una cadena de caracteres a mayuscula.
    */

    char cadena[25];
    printf("Ingrese una palabra: \n");
    fgets(cadena,sizeof(cadena),stdin);


    convertirAmayuscula(cadena);
    printf("La cadena en mayusculas es: %s\n", cadena);
    return 0;
}
//Declaracion de funciones:



void convertirAmayuscula(char cadena[]){
int i = 0;
while(cadena [i] != '\0'){
    cadena[i]= toupper(cadena[i]);
    i++;
}

}
