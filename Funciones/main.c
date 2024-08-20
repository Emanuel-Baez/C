#include <stdio.h>
#include <stdlib.h>

//PROTOTIPO(en el prototipo solo se especifica de que tipo van a ser los parametros.)
float calcularAreaTriangulo (float, float);

int main()
{
    float base;
    float altura;
    float resultado;

    printf("INGRESE UNA BASE\n");
    scanf("%f",&base);


    printf("INGRESE UNA ALTURA\n");
    scanf("%f",&altura);

    resultado = calcularAreaTriangulo(base,altura);
    printf("Base ingresada: %.2f , Altura ingresada: %.2f , Su area es: %.2f" ,base,altura,resultado);

    return 0;
}

//DECLARACION DE FUNCION
float calcularAreaTriangulo (float base, float altura){
    float area = 0;
      area = (base * altura) /2;
      return area;
}

