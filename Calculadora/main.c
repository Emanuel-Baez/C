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
    printf("OPERACION 1 : SUMA\n");

    printf("OPERACION 2 : RESTA\n");

    printf("OPERACION 3 : MULTIPLICACION\n");

    printf("OPERACION 4 : DIVISION\n");

    printf("OPERACION 5 : RAIZ CUADRADA\n");

    printf("OPERACION 6 : POTENCIA\n");


    scanf("%d",&operacion);

    switch(operacion){

    case 1 :
          printf("INGRESE EL PRIMERO NUMERO\n");
          scanf("%f",&numero1);

         printf("INGRESE EL SEGUNDO NUMERO\n");
         scanf("%f",&numero2);
         resultado = numero1 + numero2 ;
         printf("EL RESULTADO DE LA SUMA ES: %.1f \n", resultado);
    break;

     case 2 :
          printf("INGRESE EL PRIMER NUMERO\n");
          scanf("%f",&numero1);

         printf("INGRESE EL SEGUNDO NUMERO\n");
         scanf("%f",&numero2);
         resultado = numero1 - numero2 ;
         printf("EL RESULTADO DE LA RESTA ES : %.1f \n", resultado);
    break;

    case 3 :
          printf("INGRESE EL PRIMER NUMERO\n");
          scanf("%f",&numero1);

         printf("INGRESE EL SEGUNDO NUMERO\n");
         scanf("%f",&numero2);
         resultado = numero1 * numero2 ;
         printf("EL RESULTADO DE LA MULTIPLICACION ES : %.2f \n", resultado);
    break;

    case 4 :

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

         printf("INGRESE UN NUMERO\n");
         scanf("%f",&numero);

         printf("INGRESE LA POTENCIA\n");
         scanf("%f",&potencia);


        resultado = pow(numero, potencia);

        printf("LA POTENCIA DE %.0f ES : %.2f \n",numero, resultado);


    break;
    default:
            printf("Opcion invalida.\n");


    }

        printf("¿Desea realizar otra operación? (s/n): ");
        scanf(" %c", &continuar); // El espacio antes de %c evita problemas con espacios en blanco
    } while (continuar == 's' || continuar == 'S');


    printf("FIN DEL PROGRAMA.");

    return 0;
}
