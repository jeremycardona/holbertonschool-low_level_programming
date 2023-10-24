#include "main.h"
/**
 * print_rev - Print a string, in reverse
 * Description: Print a string, in reverse, followed by
 * a newline.
 * @s: string to be reversed.
 */
void print_rev(char *s)
{
	if (s != 0)
	{
		int s_len = _strlen(s);
		char *p;

		p = s;
		s += s_len;
		while (s + 1 != p)
		{
			_putchar(*s);
			s--;
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
