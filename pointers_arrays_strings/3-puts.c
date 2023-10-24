#include "main.h"
/**
 * _puts - Print a string
 * Description: Print a string, followed by a newline.
 * Similar function to puts from stdio.
 * @str: string to print
 */
void _puts(char *str)
{
	if (str != 0)
	{
		while (*str != '\0')
		{
			_putchar(*str);
			str++;
		}
	}
	_putchar('\n');
}
