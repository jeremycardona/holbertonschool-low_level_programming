#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - print a string in reverse
 * Description: print a string in reverse using recursion
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	if (!*s)
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
