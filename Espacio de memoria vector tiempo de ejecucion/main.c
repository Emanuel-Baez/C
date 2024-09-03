#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Asignamos espacio en memoria en tiempo de ejecucion
    int *vector = (int*) malloc(sizeof(float)*5);

    //Un vector es un puntero

    vector[0]= 18;
    vector[1]= 19;
    vector[2]= 20;
    *(vector+3) = 21;
    //Imprime la primer posicion del puntero vector.
    printf("Valor : %d \n",*vector);
    printf("Posicion de memoria : %p \n",vector);
    //Imprime la segunda posicion del puntero vector.
     printf("Valor : %d \n",*vector+1);
     printf("Posicion de memoria : %p \n",vector+1);
     //Imprime la tercer posicion del puntero vector.
      printf("%d \n",*vector+2);
      printf("Posicion de memoria : %p \n",vector+2);
      //Imprime la cuarta posicion del puntero vector.
      printf("%d \n",*vector+3);
      printf("Posicion de memoria : %p \n",vector+3);





    return 0;
}
