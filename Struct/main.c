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


     printf("\n Ingrese descripcion de producto:");
     fgets(nuevoProducto.descripcion,30,stdin);

     printf("\n Ingrese un codigo de producto:");
     scanf("%d",&nuevoProducto.codigo);

     printf("\n Ingrese stock de producto:");
     scanf("%d",&nuevoProducto.stock);

     printf("\n Ingrese precio de producto:");
     scanf("%f",&nuevoProducto.precio);
    printf("---DATOS DE PRODUCTO INGRESADO--- \n");
    printf("\n Descripcion del producto : %s", nuevoProducto.descripcion);
    printf("\n Codigo del producto : %d",nuevoProducto.codigo);
    printf("\n Stock del producto : %d",nuevoProducto.stock);
    printf("\n Precio del producto : $%.2f ",nuevoProducto.precio);

    return 0;
}
