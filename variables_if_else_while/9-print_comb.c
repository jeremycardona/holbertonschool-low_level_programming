#include <stdio.h>
/**
 * main - entry point
 *
 * Return: sucess
 *
 * Description: Print all possible combinations of
 * single digit numbers.
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}
