#include <stdio.h>
/**
 * reverse_array - reverse array of int
 * Description: reverse array of int
 * @n: array size
 * @a: array of int
 */

void reverse_array(int *a, int n)
{
	int *left;
	int *right;

	right = &a[n - 1];
	left = a;

	while (left < right)
	{
		*left ^= *right;
		*right ^= *left;
		*left ^= *right;

		left++;
		right--;
	}
	a = right;
}
