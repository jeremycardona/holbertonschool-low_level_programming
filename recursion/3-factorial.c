/**
 * factorial - factorial of given number
 * Description: Return the factorial of given number
 * Return: factorial result
 * @n: number are going to evaluate
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 0)
		return (1);

	n = n * factorial(n - 1);
	return (n);

}
