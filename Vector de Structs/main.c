#include <stdio.h>
#include <stdlib.h>


struct producto {
 char descripcion [30];
 int codigo;
 int stock;
 float precio;
};

int main()
{


    struct producto nuevoProducto;
    struct producto listaProducto[10];

    listaProducto[0].codigo = 1;

    listaProducto[1].codigo = 2;

    listaProducto[2].codigo = 3;

    listaProducto[0].stock = 100;

    listaProducto[1].stock = 200;

    listaProducto[2].stock = 300;

    listaProducto[0].precio = 1000;

    listaProducto[1].precio = 2000;

    listaProducto[2].precio = 3000;

     printf("\n El codigo de lista en [0] es: %d",listaProducto[0].codigo);
     printf("\n El codigo de lista en [1] es: %d",listaProducto[1].codigo);
     printf("\n El codigo de lista en [2] es: %d",listaProducto[2].codigo);

     printf("\n El stock de lista en [0] es: %d",listaProducto[0].stock);
     printf("\n El stock de lista en [1] es: %d",listaProducto[1].stock);
     printf("\n El stock de lista en [2] es: %d",listaProducto[2].stock);

     printf("\n El precio de lista en [0] es: $%.2f",listaProducto[0].precio);
     printf("\n El precio de lista en [1] es: $%.2f",listaProducto[1].precio);
     printf("\n El precio de lista en [2] es: $%.2f",listaProducto[2].precio);




    return 0;
}
