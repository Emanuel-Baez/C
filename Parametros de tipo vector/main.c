#include <stdio.h>
#include <stdlib.h>

//prototipo
void incrementarVector(int [], int);
int main()
{

    int vector[] = {1,2,3,4,5,6,7,8,9,10};

     incrementarVector(vector, 10);

    return 0;
}

void incrementarVector(int num [], int longitud){

 for(int i = 0; i < longitud ; i++){
    printf("Valor: %d \n",num[i]++);
 }
}
