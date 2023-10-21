#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: success
 *
 * Description: Program that outputs if
 * a number is positive, is zero or is negative.
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
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
