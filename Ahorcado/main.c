#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
     Simular el juego Ahorcado (Adivinar la palabra secreta).
Nuestro juego comenzara solicitando una palabra secreta de como m�ximo 50 caracteres.
Para solucionar el ejercicio y generar mejor experiencia al usuario debemos tener en cuenta estos puntos:
Punto 1: Los usuarios solo tendr�n 3 intentos totales.
Punto 2: Si la letra no se encuentra dentro de la palabra se mostrar� un mensaje de error y se imprimen la cantidad
de intentos disponibles.
Punto 3: Si la letra se encuentra mostrar vista previa con los aciertos hasta el momento.
Punto 4: Las letras adivinadas deben ir en la posici�n que se encuentra dentro de la palabra y las letras no
adivinadas se ofuscan usando guiones bajos. Ejemplo: Teniendo la palabra secreta �HOLA� H_ L A.
Punto 5: Si se adivina la palabra mostrar mensaje �xito.
Punto 6: Si al usuario no le quedan intento mostrar un mensaje en pantalla y finalizar el programa.
NOTA: Resolver el ejercicio usando Funciones con par�metros por referencia.
Utilizar y desarrollar estos prototipos de funci�n:
La funci�n debe recibir el puntero de la palabra secreta, el puntero con los aciertos y la letra ingresada
por el usuario a adivinar y verificar si est� dentro de la palabra e imprimir el avance.
int validarCaracterEnPalabra(char * , char * ,char);
La funci�n debe recibir un puntero de un vector con el avance de la palabra e imprime por pantalla su
valor.
void mostrarLetrasAdivinadas(char * );
Elimina el barra N de un string
void eliminarBarraN(char *);
Rellena con guiones un string
void rellenarConGuiones(char * )
*/

    printf("Hello world!\n");
    return 0;
}
