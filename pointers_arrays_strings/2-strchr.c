#include <stdlib.h>
/**
 * _strchr - locate a character in a string
 * Description: function that locates a character in a string
 * Return: a pointer to the first ocurrence of the character c
 * in the string s, or NULL if the character is not found.
 * @s: string to search
 * @c: char to look for
 */
char *_strchr(char *s, char c)
{
	while (s)
	{	
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
