#include "main.h"
/**
 * _strncpy - copy a string
 * Description: function similar to stdlib.
 * Return: Dest string replaced by src
 * @dest: string to be replaced
 * @src: string replacement
 * @n: number of chars that will be replaced
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, d_i = 0;
	int src_len = _strlen(src) - 1;

	while (n--)
	{
		dest[d_i] = src[i];
		if (!src[i])
			break;
		d_i++;
		if (src_len > 0)
			i++;
	}
	return (dest);
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
