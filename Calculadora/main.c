#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*
    Desarrollar una calculadora en C con las siguientes opciones:

    - Suma
    - Resta
    - Multiplicacion
    - Division (debe restringirse las divisiones por 0)
    - Raiz cuadrada (debe restringirse los numeros negativos)
    - Potencia

    La calculadora debe tener un menu donde el usuario pueda elegir cada operacion ingresando el numero de opcion
    correspóndiente.
    */

char continuar;

    do {



//DECLARACION DE VARIABLES
    float numero1 = 0;
    float numero2 = 0;
    float resultado = 0;
    float numero, potencia;
    int operacion = 0;


    printf("CALCULADORA\n");
    printf("INGRESE UNA OPERACION: \n");
    printf("1 : SUMA\n");

    printf("2 : RESTA\n");

    printf("3 : MULTIPLICACION\n");

    printf("4 : DIVISION\n");

    printf("5 : RAIZ CUADRADA\n");

    printf("6 : POTENCIA\n");


    scanf("%d",&operacion);

    switch(operacion){

    case 1 :

         printf("---OPERACION DE SUMA---\n");
          printf("INGRESE EL PRIMERO NUMERO\n");
          scanf("%f",&numero1);

         printf("INGRESE EL SEGUNDO NUMERO\n");
         scanf("%f",&numero2);
         resultado = numero1 + numero2 ;
         printf("EL RESULTADO DE LA SUMA ES: %.1f \n", resultado);
    break;

     case 2 :
         printf("---OPERACION DE RESTA---\n");
          printf("INGRESE EL PRIMER NUMERO\n");
          scanf("%f",&numero1);

         printf("INGRESE EL SEGUNDO NUMERO\n");
         scanf("%f",&numero2);
         resultado = numero1 - numero2 ;
         printf("EL RESULTADO DE LA RESTA ES : %.1f \n", resultado);
    break;

    case 3 :
        printf("---OPERACION DE MULTIPLICACION---\n");
          printf("INGRESE EL PRIMER NUMERO\n");
          scanf("%f",&numero1);

         printf("INGRESE EL SEGUNDO NUMERO\n");
         scanf("%f",&numero2);
         resultado = numero1 * numero2 ;
         printf("EL RESULTADO DE LA MULTIPLICACION ES : %.2f \n", resultado);
    break;

    case 4 :

    printf("---OPERACION DE DIVISION---\n");
         printf("INGRESE EL PRIMER NUMERO\n");
         scanf("%f",&numero1);
         printf("INGRESE EL SEGUNDO NUMERO\n");
         scanf("%f",&numero2);
         if(numero1 == 0 || numero2 == 0){
         printf("EL NUMERO DEBE SER MAYOR A CERO.");

         }else {
         resultado = numero1 / numero2 ;
         printf("EL RESULTADO DE LA DIVISION ES : %.2f \n", resultado);
         }

    break;
    case 5 :

        printf("---OPERACION DE RAIZ---\n");
         printf("INGRESE UN NUMERO\n");
         scanf("%f",&numero1);


         if(numero1 <=0){
            printf("EL NUMERO DEBE SER POSITIVO.");
         }else {
          resultado = sqrt(numero1);
         printf("LA RAIZ CUADRADA DE %.0f ES : %.1f  \n",numero1, resultado);
         }


    break;
    case 6 :
         printf("---OPERACION DE POTENCIA---\n");

         printf("INGRESE LA BASE:\n");
         scanf("%f",&numero1);

         printf("INGRESE EL EXPONENTE:\n");
         scanf("%f",&numero2);


        resultado = pow(numero1, numero2);

        printf("LA POTENCIA ES : %.2f \n",resultado);


    break;
    default:
            printf("Opcion invalida.\n");


    }

        printf(" DESEA REALIZAR OTRA OPERACION ?(si/no):\n ");
        scanf(" %c", &continuar); // El espacio antes de %c evita problemas con espacios en blanco
    } while (continuar == 'si' || continuar == 'SI');


    printf("FIN DEL PROGRAMA.");

    return 0;
}
