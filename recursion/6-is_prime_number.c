/**
 *
 */

int is_prime_number(int n)
{
	int i = n / 2;

	if (n == 0 || n == 1)
		return (0);

	if (n == i)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (1);
	}
	i--;
	return is_prime_number(n);
}
