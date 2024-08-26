#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{

    /*
    Strcpy :
    Este metodo copia una cadena y la guarda en otra.
    Primero se le pasa donde copiar y despues que se quiere copiar.


    */

    char strOrigen[20];

    char strDestino[10];
    int longitud ;

    printf("Ingrese una palabra: \n");
    fgets(strOrigen,20,stdin);

    longitud = strlen(strOrigen);

    printf(" Longitud de la cadena : %d \n",longitud);


    if (fgets(strOrigen, 20, stdin) == NULL) {
    printf("Error al leer la cadena.\n");
    return 1;
}


    if(longitud < 10) {
     strcpy(strDestino,strOrigen);

    printf(" Palabra copiada : %s",strDestino);

    } else {

    printf(" No se pudo copiar la cadena.");
    }




    return 0;
}
