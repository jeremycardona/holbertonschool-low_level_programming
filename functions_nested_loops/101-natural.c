#include <stdio.h>
/**
 * main - sum multiples of 3 and 5
 * Return: sucess
 * Description: sum multiples of 3 and 5 below 1024
 */
int main(void)
{
	int sum_multiples = 0, natural;

	for (natural = 0; natural < 1024; natural++)
	{
		if (natural % 3  == 0 || natural % 5 == 0)
			sum_multiples += natural;
	}
	printf("%d\n", sum_multiples);
	return (0);
}
