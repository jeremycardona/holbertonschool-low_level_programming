#include "main.h"

/* prototypes here */
void put_num(int);
/**
 * more_numbers - print nummber 0 to 14, 10 times
 * Description: print 0 to 14, 10 times.
 */

void more_numbers(void)
{
	int num = 0, times = 10;

	while (times--)
	{
		while (num < 15)
		{
			put_num(num);
			num++;
		}
		_putchar('\n');
		num = 0;
	}

}
/**
 * put_num - print numbers up to 99
 * description: print numbers up to 99 using
 * _putchar.
 * @n: number to be printed.
 */
void put_num(int n)
{
	if (n > 9)
		_putchar('0' + n / 10);
	_putchar('0' + n % 10);
}
