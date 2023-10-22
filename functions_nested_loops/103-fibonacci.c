#include <stdio.h>

/**
 * main - find and print the sum of even valued fibonacci number sqnc
 * Return: sucess
 * Description: Consider the terms in the fibo sequence whopse values
 * does not exceed 4,000,000. Find and print the sum of even-valued
 * terms, followed by newline.
 */
int main(void)
{
	int term, max = 4000000;
	long int fib_term1 = 1, fib_term2 = 2, even_fib = 2, fib;

	for (term = 1; term < max; term++)
	{
		fib = fib_term1 + fib_term2;
		if (fib % 2 == 0)
			even_fib += fib;
		fib_term1 = fib_term2;
		fib_term2 = fib;
	}
	printf("%ld\n", even_fib);
	return (0);
}
