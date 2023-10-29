#include <stdio.h>
/**
 * string_toupper - string to upper
 * Description: String to upper, check if its already uppercase.
 * Return: string uppercase
 * @lower: string
 */
char *string_toupper(char *lower)
{
	int i = 0;
	char c;

	while (lower[i])
	{

		c = lower[i];
		if (c >= 'a' && c <= 'z')
			c = (int)c - 32;
		lower[i] = c;
		i++;
	}
	return (lower);
}
