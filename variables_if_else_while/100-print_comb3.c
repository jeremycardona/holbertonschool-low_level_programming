#include <stdio.h>
/**
 * main - entry point
 *
 * Return: success
 *
 * Description: possible different combinations of
 * two digits, separated by a coma and followed by a
 * space
 */
int main(void)
{
	short int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
