#include "main.h"

int prime_number(int, int);
/**
 * is_prime_number - return 1 if integer is a prime
 * Description: return 1 if int is prime, otherwise return 0
 * Return: recursive function call
 * @n: num to evaluate as prime or not
 */
int is_prime_number(int n)
{
	int i = 2;
	int is_prime = prime_number(n, i);

	if (is_prime == 1)
		return (1);
	return (0);
}
/**
 * prime_number - generate primes
 */
int prime_number(int n, int i)
{
	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	else if (n % i == 0)
		return (0);
	else if (i >= n/2)
		return (1);
	else
		return (prime_number(n, i + 1));
}
