#include <stdio.h>
#include <stdlib.h>


void intercambiar(int*,int*);
int main()
{
    /*
    Intercambiar dos números
Escribe una función que intercambie los valores de dos variables enteras usando punteros.
    */
    int a;
    int b;
    printf("Ingresa el valor a :");
    scanf("%d",&a);

    printf("Ingresa el valor b :");
    scanf("%d",&b);
     int *puntero;
     puntero = &a;
     puntero = &b;

     printf(" valor A  antes del intercambio: %d\n",a);

     printf(" valor B  antes del intercambio: %d \n ",b);


    intercambiar(&a,&b);


     printf(" valor A  despues del intercambio: %d\n",a);

     printf(" valor B  despues del intercambio: %d\n",b);


    return 0;
}

void intercambiar(int *a,int *b){
    int aux = *a;
    *a=*b;
    *b=aux;

}
