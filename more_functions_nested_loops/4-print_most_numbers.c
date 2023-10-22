#include "main.h"
/**
 * print_most_numbers - print 0 to 9 except 2, 4
 * Description: Print 0 to 9 except nums 2 and 4.
 */
void print_most_numbers(void)
{
	int num = 0;

	while (num < 9)
	{
		if (num == 2 && num == 4)
		{
			num++;
			continue;
		}
		_putchar('0' + num);
		num++;
	}
	_putchar('\n');
}
