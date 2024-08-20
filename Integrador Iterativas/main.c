#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
    Desarrollar un programa que permita el ingreso de notas hasta que el usuario ingrese 0.
    Al finalizar se debera informar por pantalla:
    - La nota mas alta.
    - La nota mas baja.
    - el promedio de todas las notas.
    -----------------------------------------
    - Los aprobados (nota mayor o igual a 4)
    - Los desaprobados (nota menor a 4)
    - Los promocionados (nota mayor o igual a 7)
    */

    float notas = 0;
    int contadorNotas =0;
    float resultado= 0;
    float promedio= 0;

    int aprobados = 0;
    int desaprobados = 0;
    int promocionados = 0;

    float notaAltaActual = 0;
    float notaBajaActual = 10;


    do{

        printf("Ingrese una nota (0 para terminar):\n");
        scanf("%f",&notas);


           // Contar aprobados, desaprobados y promocionados
        if (notas >= 4) {
            aprobados++;
        }if (notas >= 7 && notas <= 10) {
                promocionados++;
        }if ( notas <4 && notas >= 0 && notas != 0){
         desaprobados++;
        }



         if (notas > notaAltaActual) {
            notaAltaActual = notas;
        }
        if (notas < notaBajaActual) {
            notaBajaActual = notas;
        }



        if(notas != 0) {
        contadorNotas++;
        }

        resultado += notas;
        promedio = resultado / contadorNotas;





    }while(notas!=0);

    // Mostrar resultados
    printf("-------------------\nResultados:---------------------------------\n");
    printf("Nota más alta: %.0f\n", notaAltaActual);
    printf("Nota más baja: %.0f\n", notaBajaActual);
    printf("Promedio: %.2f\n", promedio);

    printf("Aprobados: %d\n", aprobados);
    printf("Desaprobados: %d\n", desaprobados);
    printf("Promocionados: %d\n", promocionados);




    return 0;
}
