#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
<<<<<<< HEAD
 * main - Prints random number and states whether
 * it is positive, negative, or zero.
=======
 * main - Prints a random number and states whether
 * it is positive or negative, or zero.
>>>>>>> 95c4e2b01a697140a6f8895d6b1028b8b1b026e9
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
<<<<<<< HEAD

	printf("n is: %d \n", n);
=======
>>>>>>> 95c4e2b01a697140a6f8895d6b1028b8b1b026e9
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
