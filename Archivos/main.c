#include <stdio.h>

int main() {
    int caracter;
    FILE *archivo; // Declarar puntero a un archivo
    // Cambia la ruta según sea necesario
    if ((archivo = fopen("C:\\Users\\emanu\\Desktop\\C\\Archivos\\test.txt", "r")) != NULL) {
        while ((caracter = fgetc(archivo)) != EOF)
            printf("%c", caracter);
        fclose(archivo);
    } else {
        perror("Error al abrir el archivo");
    }
    return 0;
}
