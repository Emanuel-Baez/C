#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Desarrollar un programa que genere una sucesion de numeros impares (1-3-5-7),
    hasta que la sumatoria de todos sus componentes sea 1024.Contar la cantidad de numeros sumados.
    */


    printf("Hello world!\n");

    int i = 0;
     int cantNumeros = 0;
    int sumatoria = 0;



        do {
             if (i % 2 == 1){
                    sumatoria = sumatoria + i;
                    cantNumeros++;
                    printf("Numero actual : %d \n",i);
                    printf("Sumatoria : %d \n",sumatoria);

        }
        i++;

        }while(sumatoria<1024);


        printf("Cantidad de numeros sumados : %d \n",cantNumeros);



    return 0;
}
