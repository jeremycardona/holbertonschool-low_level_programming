#include <stdarg.h>
/**
 * sum_them_all - return the sum of all its parameters
 * Description: Function that returns the sum of all its arguments.
 * Return: sum or 0 if n == 0
 * @n: number of variadic arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum;
	va_list ap;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(ap, n);
	for (; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
