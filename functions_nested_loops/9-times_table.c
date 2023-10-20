#include "main.h"
/**
 * times_table - print the multiplication table up to 9
 * Description: Print the multiplication table up to 9,
 * separated by comma and two spaces  
 */
void times_table(void)
{
	int row = 0, column = 0, multiple;
	char c;

	for (; row <= 9; row++)
	{
		while (column <= 9)
		{
			multiple = row * column;
			c = multiple;

			_putchar(c);
			if (column < 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			column++;
		}
		column = 0;
		_putchar('\n');
	}
}
