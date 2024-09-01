#include <stdio.h>
#include <stdlib.h>


struct punto {
  float x;
  float y;

};
int main()
{



    struct punto *puntero;

    puntero = (struct punto *) malloc(sizeof(struct punto));


    puntero ->x = 10;

    puntero ->y = 20;

    printf("Cantidad de espacios en memoria : %d bytes\n",sizeof(struct punto));
    printf("Posicion de memoria : %p \n",puntero);
    printf("Valor de x : %.2f \n",puntero -> x);
    printf("Valor de y : %.2f \n",puntero ->y);
    return 0;
}
