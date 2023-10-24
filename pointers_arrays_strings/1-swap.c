/**
 * swap_int - Swap the values of two integers
 * Description: Function that swaps the values of two
 * integers.
 * @a: value one
 * @b: value two
 */
void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
