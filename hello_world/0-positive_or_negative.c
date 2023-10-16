#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    srand(time(NULL)); // Initialize the random number generator
    n = rand() % (2 * RAND_MAX + 1) - RAND_MAX; // Generate a random number within the range of int

    printf("The number is %d\n", n);

    if (n > 0) {
        printf("is positive\n");
    } else if (n == 0) {
        printf("is zero\n");
    } else {
        printf("is negative\n");
    }

    return 0;
}

