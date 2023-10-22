#include "main.h"
/**
 * print_diagonal - draw a diagonal line
 * Description: draw a diagonal line
 * in the terminal.
 * @n: number of times diagonal line is 
 * going to print.
 */
void print_diagonal(int n)
{
	do {
		if (n > 0)
			_putchar('/');
		n--;
	} while (n > 0);
	_putchar('\n');
}
