/**
 * _isdigit - check for a digit
 * Return: 1 if digit, 0 otherwise
 * Description: check for a digit 0 through 9
 * @c: digit to be checked
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	return (0);
}
