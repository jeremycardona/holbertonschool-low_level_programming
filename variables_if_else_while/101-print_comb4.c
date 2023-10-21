#include <stdio.h>
/**
 * main - entry point
 *
 * Return: success
 *
 * Description: possible different combinations of
 * three digits, separated by a coma and followed by a
 * space
 */
int main(void)
{
	short int i, j, k;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				if (i < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
