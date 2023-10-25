#include "main.h"
/**
 * puts_half - print the second half of a string
 * Description: Print the second half of a string,
 * if character is odd, print the last n, where
 * n = ( len - 1 ) / 2.
 * @str: character array
 */
void puts_half(char *str)
{
	int str_length = _strlen(str), n;

	if (str != 0)
	{
		if (str_length % 2 == 0)
		{
			for (n = str_length / 2; n < str_length; n++)
				_putchar(str[n]);
		}
		else
		{
			for (n = (str_length - 1) / 2; n < str_length - 1; n++)
				_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
/**
 * _strlen - return the length of a string
 * Description: Function that returns the length of
 * a string.
 * Return: Length of s
 * @s: String.
 */
int _strlen(char *s)
{
	int len = 0;

	if (s != 0)
	{
		int i;

		for (i = 0; *s != '\0'; i++)
		{
			len++;
			s++;
		}
	}
	return (len);
}
