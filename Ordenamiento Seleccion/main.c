#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("METODO DE ORDENAMIENTO : POR SELECCION!\n");

    int vector[]={9,7,8,6,5};

    for(int i = 0; i < 4 ; i++){
        for(int j = i+1 ;j < 5; j++){
            if(vector[i] > vector[j]){
                int aux = vector[i];
                vector[i] = vector[j];
                vector[j]= aux;
            }
        }
    }

    for(int i = 0; i < 5; i++){
        printf(" %d", vector[i]); // quita el salto de línea aquí
    }
    printf("\n"); // agrega un salto de línea al final

    return 0;
}
