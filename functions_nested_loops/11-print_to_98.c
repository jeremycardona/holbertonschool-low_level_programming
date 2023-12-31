#include "main.h"

void _put_n(int);
void _put_comma_space(void);
void print_greater_98(int);
void print_less_98(int);
void print_equal_98(void);
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
 * _put_n - print n
 * Description: Verify conditions to print n
 * @n: number to be printed
 */
void _put_n(int n)
{
	int hundreds, tens;

	if (n > 99)
	{
		hundreds = n / 100;
		_putchar('0' + hundreds);

		tens = n % 100;
		if (tens > 9)
		{
			_putchar('0' + tens / 10);
			_putchar('0' + tens % 10);
		}
		else
		{
			_putchar('0');
			_putchar('0' + n % 10);
		}
	}
	if (n > 9 && n < 100)
	{
		_putchar('0' + n / 10);
		_putchar('0' + n % 10);
	}
	else if (n < 10)
	{
		_putchar('0' + n % 10);
	}
}
/**
 * _put_comma_space - print coma and space
 * Description: print comma and space.
 */
void _put_comma_space(void)
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
		_put_n(n);
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
	int n_uns;

	while (n <= 98)
	{
		n_uns = n * -1;

		if (n < 0)
		{
			_putchar('-');
			_put_n(n_uns);
		}
		else
		{
			_put_n(n);
		}
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
void print_equal_98(void)
{
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
