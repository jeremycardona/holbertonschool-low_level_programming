#include <stdio.h>
/**
 * main - entry point
 *
 * Return: sucess
 *
 * Description: prints using putchar function
 * all single digit numbers
 * of base 10 starting from 0
 */
int main(void)
{
	unsigned short int i;

	for (i = 0; i < 10; i++)
		putchar('0' + i);
	putchar('\n');
	return (0);
}
