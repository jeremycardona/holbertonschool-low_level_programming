#include "main.h"

/* prototypes here */
void put_num(int);
/**
 * more_numbers - print nummber
 * Description: print a num
 * @n: number to print
 */

void print_number(int n)
{
	put_num(n);
}
/**
 * put_num - print numbers
 * Description: print numbers
 * @n: number to be printed.
 */
void put_num(int n)
{
	if (n < 0)
		_putchar('-');
	if (n > 999)
		_putchar('0' + (n / 1000) % 10);
	if (n > 99)
		_putchar('0' + (n / 100) % 10);
	if (n > 9)
		_putchar('0' + (n / 10) % 10);
	_putchar('0' + n % 10);
}
