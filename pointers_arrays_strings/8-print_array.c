#include <stdio.h>
#include "main.h"

/**
 * print_array - print array of integers
 * Description: pritn array of integers.
 * @a: aray of integers
 * @n: size of array
 */
void print_array(int *a, int n)
{
	int i;

	if (a != 0)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", a[i]);
			if (i + 1 < n)
				printf(", ");
		}
	}
	printf("\n");
}
