#include "main.h"
/**
 * _strcpy - copy the string src to dest
 * Description: Copy the string pointed to by src,
 * included the null byte, to the buffer pointed to by dest.
 * Return: String copy
 * @dest: address to be pasted
 * @src: address to be copied
 */
char *_strcpy(char *dest, char *src)
{
	if (src != 0)
	{
		unsigned long i, size = _strlen(src);

		for (i = 0; i < size; i++)
		{
			dest[i] = *(src + i);
		}
		dest[size] = '\0';
		return (dest);
	}
	return (0);
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
