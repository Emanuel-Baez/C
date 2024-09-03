#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Malloc permite asignar memoria de forma dinamica.
    //El metodo malloc devuelve un puntero de tipo void. Por eso hay que castearlo.

    int *puntero = (int*) malloc(sizeof(int));

    float *ptr =(float*) malloc(sizeof(float));

     printf("%p \n",puntero);
     printf("%p \n",ptr);

     *puntero = 10;
     *ptr = 20.5;

     printf("%d \n",*puntero);
     printf("%.2f \n",*ptr);

    free(puntero);
    free(ptr);
    //Un vector es un puntero
    int vector[5];
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
