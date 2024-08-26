#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    /*
    strcmp :
    Si la funcion devuelve 0, es porque ambos strings son iguales.
    Si devuelve un numero positivo, es porque el primer string es mayor al segundo.
    Si devuelve un numero negativo, es porque el segundo string es mayor al primero.


    */

    char palabra1[10];

    char palabra2[10];
    printf("Ingrese una palabra: \n");
    fgets(palabra1,10,stdin);

    printf("Ingrese una palabra: \n");
    fgets(palabra2,10,stdin);

    if(strcmp(palabra1,palabra2)== 0){
        printf("Las palabras son iguales \n");
    }else {
            printf("Las palabras son diferentes \n");
    }

    return 0;
}
