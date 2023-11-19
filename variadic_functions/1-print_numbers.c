#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers, newline
 * Description: function that prints arg params, and separators
 * @separator: strign separator
 * @n: arg_params number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg_params;
	int numbers;

	va_start(arg_params, n);
	for (i = 0; i < n; i++)
	{
		numbers = va_arg(arg_params, int);
		if (separator && i > 0)
			printf("%s", separator);
		printf("%i", numbers);
	}
	va_end(arg_params);
	printf("\n");
}
