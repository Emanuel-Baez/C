
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct fecha {
int dia;
char mes[16];
int anio;
};

int main()
{
    /*
    Realizar una función que reciba un puntero a una estructura fecha. La función tiene que validar la
    fecha y devolverla en formato texto. Por ejemplo: 15 de Octubre del 2017
    */
    struct fecha fech = {15,'de Octubre del',2017};

    printf("Dia: %d",fech.dia);

    printf("Mes: %s",fech.mes);

    printf("Año: %d",fech.anio);

    /*
    struct fecha   fech = {15,'de Octubre del',2017} ;
    struct fecha *pfecha;
    pfecha = &fech;

    // Usando el operador flecha
    printf("Dia: %d\n", fech->dia);
    printf("Mes: %s\n", fech->mes);
    printf("Año: %d\n", fech->anio);
    */

    return 0;
}
