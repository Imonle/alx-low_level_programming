#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *This program assign a random number to n each time it is executed
 * main - Starting point
 * Return:0 if successful
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
