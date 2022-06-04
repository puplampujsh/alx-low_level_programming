#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
<<<<<<< HEAD
 * Main - Prints a random number and states whether
 * it is positive or negative, or zero.
=======
 * main - Prints a random number and states whether it
 * is positive, negative, or zero.
>>>>>>> 8dfcb58178b85f8bcce42ac1742b76e31b469047
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
	/* insert code here */
>>>>>>> 8dfcb58178b85f8bcce42ac1742b76e31b469047
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
<<<<<<< HEAD
		printf("%d is zero\n");

=======
		print("%d is zero\n", n);
>>>>>>> 8dfcb58178b85f8bcce42ac1742b76e31b469047
	return (0);
}
