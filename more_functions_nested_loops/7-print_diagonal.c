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
	int blank = 1, temp = 0;

	do {
		if (n > 0)
		{
			while (temp > 0)
			{
				_putchar(' ');
				blank++;
				temp--;
			}

			_putchar('\\');
			_putchar('\n');
		}
		temp = blank;
		n--;
	} while (n > 0);
	_putchar('\n');
}
