
    /*
    Desarrollar un programa que permita el ingreso de numeros hasta que el usuario
    ingrese 0 o la cantidad de numeros sea 5.Al finalizar informar el promedio de
    dichos numeros.
    */

    #include <stdio.h>

int main() {
    int numero, contador = 0, suma = 0;
    float promedio;

    printf("Ingrese números (0 para terminar):\n");

    while (contador < 5) {
             printf("Ingrese un numero:\n");
        scanf("%d", &numero);

        if (numero == 0) {
            break; // Sale del bucle si se ingresa 0
        }

        suma += numero;
        contador++;
    }

    if (contador > 0) {
        promedio = (float)suma / contador;
        printf("El promedio de los números ingresados es: %.2f\n", promedio);
    } else {
        printf("No se ingresaron números válidos.\n");
    }

    return 0;
}
