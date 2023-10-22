#include <stdio.h>
/**
 * main - print the first 98 fibonacci numbers
 * Return: sucess
 * Description: Print the first 98 fibo nums, starting with 1 and 2.
 */
int main(void)
{
	int max = 100, term;
	unsigned long fib, fib_term1 = 1, fib_term2 = 2;

	printf("%lu, %lu, ", fib_term1, fib_term2);
	for (term = 2; term <= max; term++)
	{
		fib = fib_term1 + fib_term2;
		printf("%lu", fib);
		if (term + 1 < max)
			printf(", ");
		fib_term1 = fib_term2;
		fib_term2 = fib;
	}
	printf("\n");

	return (0);
}
