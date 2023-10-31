/**
 * _strlen_recursion - length of a string
 * Description: return the length of a string.
 * Return: string length
 * @s: string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		s++;
		len += 1 + _strlen_recursion(s);
		return (len);
	}
	return (len);
}
