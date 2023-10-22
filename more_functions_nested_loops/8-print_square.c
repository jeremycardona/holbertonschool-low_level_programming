#include "main.h"
/**
 * print_square - print a square
 * Description: print a square of the size
 * @size: square size
 */
void print_square(int size)
{
	int row, col;

	if (size > 0)
	{
		for (row = size; row >= 0; row--)
		{
			for (col = size; col >= 0; col--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
