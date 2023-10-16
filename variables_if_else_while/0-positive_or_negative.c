#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    printf("El número es %d\n", n);

    if (n > 0)
    {
        printf("es positivo\n");
    }
    else if (n == 0)
    {
        printf("es cero\n");
    }
    else
    {
        printf("es negativo\n");
    }

    return (0);
}
