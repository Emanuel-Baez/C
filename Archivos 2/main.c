#include <stdio.h>
#include <stdlib.h>

int main()
{
  char string[100];
  FILE *archivo;
  if ((archivo = fopen("C:\\Users\\emanu\\Desktop\\C\\Archivos\\test.txt", "r")) != NULL) {
        while ((fgets(string,100,archivo)) != NULL)
            printf("%s", string);
        fclose(archivo);
    } else {
        printf("Error al abrir el archivo");
    }

    return 0;
}
