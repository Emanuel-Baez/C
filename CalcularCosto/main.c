#include <stdio.h>
#include <stdlib.h>
//PROTOTIPO
float calcularCostoEnvio(float);
int main()
{
    float distancia = 0;
    float precioProducto = 0;
    float precioFinalProducto = 0;
    float costoEnvio;

    /*
    Realizar un programa que calcule el costo de envio de un producto segun la distancia al domicilio del destinatario, teniendo en cuenta que:
    si la distancia es menor al 10kl el envio es gratis, sino su costo es de 100 + (10 * distancia).

    Modificacion 1: Tener en cuenta que la empresa no realiza envios a domicilios cuya distancia es mayor a 100kl.

    Modificacion 2 : Ingresar ahora tambien el precio del producto que se quiere enviar y calcular el precio final.
    precioFinal = precioProducto + costoEnvio
    */
    printf("BIENVENIDO:\n");

    printf("POR FAVOR INGRESE LA DISTANCIA AL DOMICILIO :\n");
    scanf("%f",&distancia);

    printf("POR FAVOR INGRESE EL PRECIO DEL PRODUCTO :\n");
    scanf("%f",&precioProducto);

    costoEnvio =calcularCostoEnvio(distancia);

    if (costoEnvio == -1){

    printf("EL PRECIO FINAL ES : %f \n",precioProducto);
    printf("NO SE PUEDE REALIZAR ENVIO, RETIRAR EN SUCURSAL\n");

    }else{
     precioFinalProducto = precioProducto + costoEnvio;
     printf("PRECIO FINAL : %.2f\n",precioFinalProducto);

    }

    return 0;
}

float calcularCostoEnvio(float distancia){
float costoEnvio;

if(distancia < 10){
      costoEnvio = 0;
}else {
if(distancia > 100){
      costoEnvio = -1;
}else{
      costoEnvio = 100 + (10 * distancia);
}
}
return costoEnvio;
}
