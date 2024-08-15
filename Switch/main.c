#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Desarrollar un programa que dado el numero de un determinado mes,
    se informe por pantalla el nombre de ese mes.
    */
    int mes = 0;
    printf("Ingrese un numero (1 - 12)\n");
    scanf("%d",&mes);
    switch(mes){
    case 1:
    printf("Enero\n");
    break;

    case 2:
    printf("Febrero\n");
    break;

    case 3:
    printf("Marzo\n");
    break;

    case 4:
    printf("Abril\n");
    break;

    case 5:
    printf("Mayo\n");
    break;

    case 6:
    printf("Junio");
    break;

    case 7:
    printf("Julio\n");
    break;

    case 8:
    printf("Agosto\n");
    break;

    case 9:
    printf("Septiembre\n");
    break;

    case 10:
    printf("Octubre\n");
    break;

    case 11:
    printf("Noviembre\n");
    break;

    case 12:
    printf("Diciembre");
    break;

    default:
            printf("Opcion invalida.\n");
    }

    return 0;
}
