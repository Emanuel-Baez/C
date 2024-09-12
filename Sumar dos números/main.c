#include <stdio.h>
#include <stdlib.h>

int sumar(int*,int*);
int main()
{
     /*
    Escribe una función que tome dos punteros a enteros, sume los valores a los que apuntan, y almacene el resultado en una tercera variable.
    */
    int numero1 = 123;
    int numero2 = 456;
    int resultado = 0;

    int *ptr1;
    int *ptr2;
    ptr1 = &numero1;
    ptr2 = &numero2;

    resultado = sumar(ptr1,ptr2);

    printf("El resultado de la suma es : %d\n",resultado);


    return 0;
}
int sumar (int *numero1, int *numero2){
return *numero1 + *numero2;
}
