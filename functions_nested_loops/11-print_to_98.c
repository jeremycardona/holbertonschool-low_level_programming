#include "main.h"

void _put_comma_space();
void print_greater_98(int);
void print_less_98(int);
void print_equal_98();
/**
 * print_to_98 - print all numbers from n to 98
 * Description: Prints numbers from n to 98 followed by nwln
 * separated by a comma and followed by a space. JCC
 * @n: number to start printing from.
 */
void print_to_98(int n)
{
	if (n > 98)
		print_greater_98(n);
	else if (n < 98)
		print_less_98(n);
	else
		print_equal_98();
}

/**
 * _put_comma_space - print coma and space
 * Description: print comma and space.
 */
void _put_comma_space()
{
	_putchar(',');
	_putchar(' ');
}
/**
 * print_greater_98 - print from n to 98 descending
 * Description: print from n to 98 
 * @n: number greater than 98
 */
void print_greater_98(int n)
{
	while (n >= 98)
	{
		_putchar(n);
		if (n != 98)
			_put_comma_space();
		n--;
	}
	_putchar('\n');
}

/**
 * print_less_98 - print from n to 98 ascending
 * Description: print from n to 98 jcc
 * @n: number less than 98
 */

void print_less_98(int n)
{
	while (n <= 98)
	{
		_putchar(n);
		if (n != 98)
			_put_comma_space();
		n++;
	}
	_putchar('\n');
}

/**
 * print_equal_98 - print 98
 * Description: print 98 and newline.
 */
void print_equal_98()
{
	_putchar(98);
	_putchar('\n');
}	
