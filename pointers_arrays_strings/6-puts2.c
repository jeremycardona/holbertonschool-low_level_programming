#include "main.h"

/**
 * puts2 - print every other char of a string
 * Description: Print every other char of a string followed by a nl.
 * @str: character array
 */
void puts2(char *str)
{
	if (str != 0)
	{
		int str_length = _strlen(str), i;

		for (i = 0; i < str_length - 1; i++)
		{
			if (i % 2 == 0)
				_putchar(str[i]);
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
