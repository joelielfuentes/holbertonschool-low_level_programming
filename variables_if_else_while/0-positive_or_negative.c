#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    srand((unsigned int)time(NULL)); // Inicializar el generador de números aleatorios

    n = rand() - RAND_MAX / 2; // Generar un número aleatorio dentro del rango de enteros

    printf("El número es %d\n", n);

    if (n > 0) {
        printf("es positivo\n");
    } else if (n == 0) {
        printf("es cero\n");
    } else {
        printf("es negativo\n");
    }

    return 0;
}
