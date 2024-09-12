#include <stdio.h>  // Biblioteca estándar para entrada/salida
#include <stdlib.h> // Biblioteca estándar de funciones (en este caso, no se usa)
#include <string.h> // Biblioteca para manipulación de cadenas (en este caso, no se usa)

// PROTOTIPOS DE FUNCIONES
void contarCaracteres(char *caracteres); // Declaración de la función que cuenta caracteres

int main()
{
    /*
    Este programa solicita al usuario ingresar una cadena de caracteres y luego cuenta
    el número de caracteres en esa cadena (sin contar el carácter nulo '\0' ni el salto de línea '\n').
    */

    char caracteres[25]; // Se define un array de 25 caracteres para almacenar la cadena ingresada
    char *ptr; // Se define un puntero a char
    ptr = caracteres; // El puntero 'ptr' apunta a la dirección del array 'caracteres'

    // Se pide al usuario que ingrese caracteres
    printf("Ingrese caracteres:\n");
    fgets(caracteres, sizeof(caracteres), stdin);
    // 'fgets' lee la entrada del usuario hasta un máximo de 'sizeof(caracteres)' y la almacena en 'caracteres'

    // Se llama a la función para contar los caracteres, pasando el puntero 'ptr'
    contarCaracteres(ptr);

    return 0;
}

// DEFINICIÓN DE LA FUNCIÓN:
void contarCaracteres(char *caracteres)
{
    int cantCaracteres = 0; // Variable para contar la cantidad de caracteres
    int i = 0;              // Variable para recorrer el array

    // Bucle que cuenta los caracteres hasta encontrar el carácter nulo '\0' o un salto de línea '\n'
    while(caracteres[i] != '\0' && caracteres[i] != '\n') {
        cantCaracteres++;  // Incrementa el contador por cada carácter válido
        i++;               // Pasa al siguiente carácter
    }

    // Imprime la cantidad de caracteres contados
    printf("Cantidad de caracteres: %d", cantCaracteres);
}
