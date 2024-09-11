
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


    struct fecha fecha1;
    struct fecha *pfecha;
    pfecha = &fecha1;
    pfecha->dia=15;
    strcpy(pfecha->mes, "Octubre");
    pfecha->anio=2017;


    // Usando el operador flecha
    printf("Dia: %d\n", pfecha->dia);
    printf("Mes: %s\n", pfecha->mes);
    printf("Anio: %d\n", pfecha->anio);


    return 0;
}

