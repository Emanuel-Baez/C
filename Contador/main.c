#include <stdio.h>
#include <stdlib.h>

int main()
{

    float temperatura = 0;
    int contador = 0;

    printf("Ingrese una temperatura: \n");
    scanf("%f",&temperatura);
    contador++;


    printf("Ingrese una temperatura: \n");
    scanf("%f",&temperatura);

    contador++;

    printf("Ingrese una temperatura: \n");
    scanf("%f",&temperatura);

    contador++;

    printf("Se ingresaron %d temperaturas \n",contador);


    return 0;
}
