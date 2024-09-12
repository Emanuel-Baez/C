#include <stdio.h>  // Biblioteca est�ndar para entrada/salida
#include <stdlib.h> // Biblioteca est�ndar de funciones (en este caso, no se usa)
#include <string.h> // Biblioteca para manipulaci�n de cadenas (en este caso, no se usa)

// PROTOTIPOS DE FUNCIONES
void contarCaracteres(char *caracteres); // Declaraci�n de la funci�n que cuenta caracteres

int main()
{
    /*
    Este programa solicita al usuario ingresar una cadena de caracteres y luego cuenta
    el n�mero de caracteres en esa cadena (sin contar el car�cter nulo '\0' ni el salto de l�nea '\n').
    */

    char caracteres[25]; // Se define un array de 25 caracteres para almacenar la cadena ingresada
    char *ptr; // Se define un puntero a char
    ptr = caracteres; // El puntero 'ptr' apunta a la direcci�n del array 'caracteres'

    // Se pide al usuario que ingrese caracteres
    printf("Ingrese caracteres:\n");
    fgets(caracteres, sizeof(caracteres), stdin);
    // 'fgets' lee la entrada del usuario hasta un m�ximo de 'sizeof(caracteres)' y la almacena en 'caracteres'

    // Se llama a la funci�n para contar los caracteres, pasando el puntero 'ptr'
    contarCaracteres(ptr);

    return 0;
}

// DEFINICI�N DE LA FUNCI�N:
void contarCaracteres(char *caracteres)
{
    int cantCaracteres = 0; // Variable para contar la cantidad de caracteres
    int i = 0;              // Variable para recorrer el array

    // Bucle que cuenta los caracteres hasta encontrar el car�cter nulo '\0' o un salto de l�nea '\n'
    while(caracteres[i] != '\0' && caracteres[i] != '\n') {
        cantCaracteres++;  // Incrementa el contador por cada car�cter v�lido
        i++;               // Pasa al siguiente car�cter
    }

    // Imprime la cantidad de caracteres contados
    printf("Cantidad de caracteres: %d", cantCaracteres);
}
