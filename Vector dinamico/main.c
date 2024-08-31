#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Usando puntero , creamos en tiempo de ejecucion el espacio de memoria para un vector.

    //Usamos malloc para asignarle un espacio en memoria para 5 numeros enteros.
    int *vector = (int*) malloc(sizeof(int)*5);
    printf("%p \n",vector);
     printf("%p \n",vector+1);

     printf("%p \n",vector+2);

     //a la primera posicion del vector le asignamos 5
     *vector = 5;
     //asignamos  el valor de 8 a la segunda posicion.
      *(vector + 1) = 8;

       printf("%d \n",vector);
     printf("%d \n",vector+1);

    return 0;
}
