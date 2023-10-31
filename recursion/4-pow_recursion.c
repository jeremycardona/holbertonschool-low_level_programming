/**
 * _pow_recursion - return the value of raised to the power of y
 * Description: return the value of x raised to the power of y,
 * similar function to pow.
 * Return: value of x to power of y
 * @x: base number
 * @y: exponent number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}
