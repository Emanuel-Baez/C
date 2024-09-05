#include <stdio.h>
#include <string.h>

void cambiarCadena(char *cadena) {
    strcpy(cadena, "Nueva cadena");
}

int main() {
    char miCadena[] = "Cadena original";
    char *punteroACadena = miCadena;

    printf("Cadena original: %s\n", miCadena);

    // Pasamos el puntero a la función
    cambiarCadena(punteroACadena);

    printf("Cadena modificada: %s\n", miCadena);

    return 0;
}
