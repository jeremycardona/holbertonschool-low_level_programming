#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print a string
 * Description: function that prints a string, separator,
 * followed by a newl
 * @separator: string between strings
 * @n: number of arguments in variadic funct!
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *strings;
	va_list args_params;

	va_start(args_params, n);
	for (i = 0; i < n; i++)
	{
		strings = va_arg(args_params, char *);
		if (separator && i > 0)
			printf("%s", separator);
		if (strings)
			printf("%s", strings);
		else
			printf("(nil)");
	}
	va_end(args_params);
	printf("\n");
}
