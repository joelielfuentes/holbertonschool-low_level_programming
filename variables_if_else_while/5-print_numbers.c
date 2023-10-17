#include <stdio.h>

int main(void)
{
    int number = 0;

    while (number < 10)
    {
        printf("%d", number);
        number++;
    }
    
    printf("\n"); // Print a new line after all the numbers.

    return (0);
}
