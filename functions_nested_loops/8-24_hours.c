#include "main.h"

void count_hours(char, char, char, char);

void count_minutes(char, char, char, char);
/**
 * jack_bauer - print every minuto of the day of Jack Bauer
 * Description: A function that prints every minute of
 * the day of Jack Bauer, starts from 00:00 to 23:59
 */
void jack_bauer(void)
{
	char H, h, M, m;

	H = h = M = m = '0';
	/**
	 * a day consists of 24 hours, hence:
	 * HH = 2 max
	 * H = 9 max
	 * MM = 5 max
	 * M 9 max
	 * this is because time is in military format
	 * hour 13:00 is 1pm
	 * hour 17:00 is 5pm
	 * hour 20:45 is 8:45pm
	 */
	count_hours(H, h, M, m);
}
/**
 * count_hours - Increment hours
 * Description: Incrementing hours and minutes
 * @H: Decimal place of hour
 * @h: uninary place of hour
 * @M: Decimal place of minute
 * @m: unary place of minute
 */
void count_hours(char H, char h, char M, char m)
{
	while (H < '3')
	{
		while (h <= '9')
		{
			if (H == '2' && h == '4')
				break;
			count_minutes(H, h, M, m);
			(int)h++;
		}
		h = '0';
		(int)H++;
	}
}
/**
 * count_minutes - Increment minutes
 * Description: Incrementing minutes
 * @H: Decimal place of hour
 * @h: uninary place of hour
 * @M: Decimal place of minute
 * @m: unary place of minute
 */
void count_minutes(char H, char h, char M, char m)
{
	while (M < '6')
	{
		while (m <= '9')
		{
			_putchar(H);
			_putchar(h);
			_putchar(':');
			_putchar(M);
			_putchar(m);
			_putchar('\n');
			(int)m++;
		}
		m = '0';
		(int)M++;
	}
}
