#include "main.h"
/**
 * times_table - print the multiplication table up to 9
 * Description: Print the multiplication table up to 9,
 * separated by comma and two spaces
 */
void times_table(void)
{
	int row = 0, column = 0, multiple;

	for (; row <= 9; row++)
	{
		while (column <= 9)
		{
			multiple = row * column;
			if (multiple <= 9)
			{
				_putchar('0' + multiple);
			}
			else
			{
				_putchar('0' + multiple / 10);
				_putchar('0' + multiple % 10);
			}
			if (column < 9)
			{
				_putchar(',');
				_putchar(' ');

				if (row * (column + 1) < 10)
					_putchar(' ');
			}
			column++;
		}
		column = 0;
		_putchar('\n');
	}
}
