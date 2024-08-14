#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = 0;
    int acumulador = 0;

    printf("Ingrese el primer monto : \n");
    scanf("%d",&numero);
    acumulador = acumulador + numero;


    printf("Ingrese el segundo monto : \n");
    scanf("%d",&numero);
    acumulador += numero;


    printf("Ingrese el tercer monto : \n");
    scanf("%d",&numero);
    acumulador = acumulador + numero;

    printf("El monto total inngresado es : %d \n",acumulador);
    return 0;
}
