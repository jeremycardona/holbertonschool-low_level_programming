#include "main.h"
/**
 * print_line - draw a straight line
 * Description: draw a straight line
 * in the terminal.
 * @n: number of times a line is going to print.
 */
void print_line(int n)
{
	do {
		if (n > 0)
			_putchar('_');
		n--;
	} while (n > 0);
	_putchar('\n');
}
