#include <stdio.h>

#define TAM_VECTOR 5 // Tama�o del vector

void cargarNotas(int notas[]); // Funci�n para cargar el vector con notas
float calcularPromedio(int notas[]); // Funci�n para calcular el promedio
void mostrarPromedios(float promedio); // Funci�n para mostrar el promedio

int main() {
    int notas[TAM_VECTOR];

    cargarNotas(notas);
    float promedio = calcularPromedio(notas);

    mostrarPromedios(promedio);

    return 0;
}
void cargarNotas(int notas[]) {
    for (int i = 0; i < TAM_VECTOR; i++) {
        printf("Ingrese la nota %d: ", i + 1);
        scanf("%d", &notas[i]);
    }
}
float calcularPromedio(int notas[]) {
    int suma = 0;
    for (int i = 0; i < TAM_VECTOR; i++) {
        suma += notas[i];
    }
    return (float)suma / TAM_VECTOR;
}

void mostrarPromedios(float promedio) {
    printf("Promedio: %.2f\n", promedio);

}
