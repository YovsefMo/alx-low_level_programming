#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
    int n;

    srand(time(0)); // Seed the random number generator with the current time
    n = rand() - RAND_MAX / 2; // Generate a random number and assign it to n

    if (n > 0)
        printf("%d is positive\n", n); // Print the message if n is positive
    else if (n == 0)
        printf("%d is zero\n", n); // Print the message if n is zero
    else
        printf("%d is negative\n", n); // Print the message if n is negative

    return 0; // Return 0 to indicate successful program execution
}

