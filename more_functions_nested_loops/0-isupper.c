/**
 * _isupper - Check for uppercase character
 * Return: 1 if uppercase, 0 otherwise
 * Description: Check for uppercase characters.
 * @c: char to be checked
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
