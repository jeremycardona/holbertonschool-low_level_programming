#include <stdio.h>
/**
 *
 *
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
