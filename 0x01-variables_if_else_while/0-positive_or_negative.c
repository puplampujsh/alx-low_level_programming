#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a random number and states whether it
 * is positive, negative, or zero.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* insert code here */
	if (n < 0)
		printf("%d is negative\n", n);
	else
		print("%d is zero\n", n);
	return (0);
}
