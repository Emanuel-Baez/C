

#include <stdio.h>
#include <stdlib.h>

int main() {

     /*
    �Qu� es malloc?
malloc es una funci�n de la biblioteca est�ndar de C que se utiliza para reservar din�micamente un bloque de memoria.
Esto significa que, en lugar de declarar una variable con un tama�o fijo al inicio de tu programa,
puedes solicitar memoria adicional durante la ejecuci�n, seg�n tus necesidades.
    */

    //void *: Devuelve un puntero de tipo void, que es un puntero gen�rico que puede apuntar a cualquier tipo de dato.
    //size_t size: Es un tipo de dato sin signo que representa el n�mero de bytes que quieres reservar.
    void *malloc(size_t size);



    return 0;
}
