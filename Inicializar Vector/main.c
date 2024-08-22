#include <stdio.h>
#include <stdlib.h>

int main()
{


    int vector[10];

    //INICIALIZAMOS EL VECTOR EN 0

     for(int i = 0;i < 10;i++){

       vector[i]= 0;
    }

    //INGRESO DE VALORES

    for(int i = 0;i < 10;i++){
        printf("Ingrese un valor: \n");
        scanf("%d",&vector[i]);

    }

    //MUESTRA DE VALORES POR PANTALLA.
    for(int i = 0; i < 10; i++){
            if(vector[i]==0){
                break;
            }else{
                printf("Indice: %d --> valor : %d \n",i,vector[i]);
            }
        }

    return 0;
}
