#include "main.h"
/**
 * print_line - draw a straight line
 * Description: draw a straight line
 * in the terminal.
 */
void print_line(int n)
{
	while (n--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
