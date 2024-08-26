#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palabra1[10];

    char palabra2[10];
    printf("ingrese una palabra: \n");
    fgets(palabra1,10,stdin);

    printf("ingrese una palabra: \n");
    fgets(palabra2,10,stdin);

    if(strcmp(palabra1,palabra2)== 0){
        printf("Las palabras son iguales \n");
    }else {
            printf("Las palabras son diferentes \n");
    }

    return 0;
}
