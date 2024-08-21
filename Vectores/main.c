#include <stdio.h>
#include <stdlib.h>

int main()
{

/*
int vector[15];

vector[0]= 102;
vector[1]= 02;
vector[2]= 2;
printf(" valor : %d \n",vector[0]);

printf(" valor : %d \n",vector[1]);

printf(" valor : %d \n",vector[2]);
*/

    int vector[10]= {10,20,30,40,50,60,88,74,94,110};

    for(int i = 0;i < 10;i++){
        printf("Indice: %d --> valor : %d \n",i,vector[i]);
    }


    return 0;
}
