int increment_base(int *b, int sqrt);
/**
 * _sqrt_recursion - return the natural square root of a number
 * Description: Return the natural square of a number.
 * Return: Natural square
 * @n: number used to find the square root.
 */
int _sqrt_recursion(int n)
{
	int base = 0;
	int *p_base = &base;

	if (base * base < n)
		base = increment_base(p_base, n);

	if (base * base == n)
		return (*p_base);

	return (-1);
}
/**
 * increment_base - increments by one, until find the base of a square number
 * Description: increment base by one, if base is less than square number
 * Return: base number that multiplied by itself is less than a square
 * @b: pointer
 * @sqrt: integer
 */
int increment_base(int *b, int sqrt)
{
	if (*b * *b < sqrt)
	{
		*b += 1;
		sqrt = increment_base(b, sqrt);
	}
	return (*b);
}
