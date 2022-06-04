#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main - Prints a random number and states whether
 * it is positive or negative, or zero.
 * Return: Always 0.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("n is: %d \n", n);
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n" n);

	return (0);
}
