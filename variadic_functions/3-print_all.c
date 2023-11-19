#include <stdio.h>
#include <stdarg.h>
void prints_char(unsigned int *, va_list);
void prints_int(unsigned int *, va_list);
void prints_float(unsigned int *, va_list);
/**
 * print_all - print anything
 * Description: function that prints anything in format
 * @format: list of typesnof arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list var_arg;
	unsigned int i = 0, format_i = 0, counter = 0;
	char *string;
	unsigned int *cp;
	const char f_list[] = "cifs";

	cp = &counter;
	va_start(var_arg, format);
	while (format && format[i])
	{
		while (f_list[format_i])
		{
			if (format[i] == f_list[format_i] && counter > 0)
			{
				printf(", ");
				break;
			}
			format_i++;
		}
		switch (format[i])
		{
		case 'c':
			prints_char(cp, var_arg);
			break;
		case 'i':
			prints_int(cp, var_arg);
			break;
		case 'f':
			prints_float(cp, var_arg);
			break;
		case 's':
			string = va_arg(var_arg, char *);
			counter++;
			if (!string)
			{
				printf("(nil)");
				break;
			}
			printf("%s", string);
			break;
		}
		i++;
		format_i = 0;
	}
	va_end(var_arg);
	printf("\n");
}
/**
 * prints_char - print a char
 * Description: print a char using printf
 * @count: counter
 * @args: variadic vars
 */
void prints_char(unsigned int *count, va_list args)
{
	*count += 1;
	printf("%c", va_arg(args, int));
}
/**
 * prints_int - print an int
 * Description: print an int using printf
 * @count: counter
 * @args: variadic vars
 */
void prints_int(unsigned int *count, va_list args)
{
	*count += 1;
	printf("%d", va_arg(args, int));
}
/**
 * prints_float - print a float
 * Description: print a float using printf
 * @count: counter
 * @args: variadic vars
 */
void prints_float(unsigned int *count, va_list args)
{
	*count += 1;
	printf("%f", va_arg(args, double));
}
