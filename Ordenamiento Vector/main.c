#include <stdio.h>
#include <stdlib.h>

int main()
{

    int ordenado ;
    int vector []={8,6,4,3,7};


printf("Forma Ordenada;");
    for(int i = 0; i<5;i++){
        printf("\n %d",vector[i]);
    }

    do {
            ordenado= 1;
         for(int i =0;i<4;i++){
        //si lo que hay en la posicion I del vector es mayor a la posicion I+1 del vector.
        //realizo intercambio
        if(vector[i] > vector[i+1]){
                //guardo el dato de la posicion I del vector en la variable aux.
            int aux = vector[i];
            //A lo que habia en la posicion I del vector le asigno lo que tiene la posicion I+1 del vector.
            vector[i] = vector[i+1];
            //Lo que hay en la posicion I+1 le asigno lo que habia en la posicion I del vector que esta guardado en
            //la variable aux.
            vector[i+1]= aux;
    ordenado = 0;
        }
    }
    }while(ordenado == 0);

printf("\n Forma Desordenada");
    for(int i = 0; i<5;i++){
        printf("\n %d",vector[i]);
    }
    return 0;
}
