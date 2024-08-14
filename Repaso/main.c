#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[20];
    char apellido[20];
    int edad;
    printf("Ingrese su nombre\n");
    //scanf("%s", &nombre);
    fgets(nombre,20,stdin);
    printf("Ingrese su apellido\n");
    //scanf("%s",&apellido);
    fgets(apellido,20,stdin);
    printf("Ingrese su edad:\n");
    scanf("%d",&edad);

    printf("Informacion del alumno: \n");

    printf("Nombre: %s \n",nombre);

    printf("Apellido: %s \n",apellido);

    printf("Edad: %d \n",edad);
    return 0;
}
