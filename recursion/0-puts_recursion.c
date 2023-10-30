#include "main.h"
/**
 * _puts_recursion - print a string
 * Description: similar functionality as puts, but implemented recursively.
 * @s: string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*(s));
		s++;
		_puts_recursion(s);
	}
}
