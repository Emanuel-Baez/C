#include <stdio.h>

int main() {
    int numero, contador = 0, suma = 0;
    float promedio;



    do {
        printf("Ingrese un n�mero (0 para terminar):\n");
        scanf("%d", &numero);

        if (numero != 0) {
            suma += numero;
            contador++;
        }
    } while (numero != 0 && contador < 5);

    if (contador > 0) {
        promedio = (float)suma / contador;
        printf("El promedio de los n�meros ingresados es: %.2f\n", promedio);
    } else {
        printf("No se ingresaron n�meros v�lidos.\n");
    }

    return 0;
}
