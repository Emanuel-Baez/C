#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    Crea un programa que:

Pida al usuario que ingrese un número entero.
Almacene este número en una variable.
Cree un puntero que apunte a esa variable.
Incremente el valor al que apunta el puntero en 5 unidades.
Imprima el valor original y el valor modificado.
    */
    int numero;
    int *puntero;

    printf("Ingresa un numero entero: \n");
    scanf("%d",&numero);
    puntero = &numero;


    printf("Numero ingresado: %d \n",numero);
    *puntero += 5;

    printf("Numero ingresado modificado : %d \n",*puntero);


    return 0;
}
