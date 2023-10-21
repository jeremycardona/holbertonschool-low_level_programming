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
	short int i, j, k, l, sum;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				for (l = 0; l < 10; l++)
				{
					if (i != k && j != l)
					{
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + k);
					putchar('0' + l);
					}
					sum = i + j;
					if (sum != 98){
						putchar(',');
						putchar(' ');	
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
