#include <stdio.h>
#include <stdlib.h>

struct punto {
    int x;
    int y;
};

int main()
{



    struct punto p;

    p.x = 10;
    p.y = 20;


    printf("Cantidad de espacios en memoria : %d bytes. \n",sizeof(struct punto));

    printf("Valor de x : %d\n",p.x);

    printf("Direccion de memoria de x : %p\n",&p.x);

    printf("Valor de y : %d\n",p.y);

    printf("Direccion de memoria de y : %p\n",&p.y);


    printf("--------------------------------------------------------------------- \n");

    struct punto *ptr;

    ptr = & p;

    printf(" Direccion de memoria: %p \n",&p);
    printf(" Valor de x : %d \n",ptr->x);
        printf("Valor de y : %d\n",ptr->y);




    return 0;
}
