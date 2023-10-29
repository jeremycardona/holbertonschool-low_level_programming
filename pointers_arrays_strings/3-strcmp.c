#include "main.h"
/**
 * _strcmp - compare two strings
 * Description: Compare two strings.
 * Return: if 1st string greater than 2nd string 15, if 1st string less than
 * 2nd string -15, else 0
 * @s1: first string
 * @s2: second string
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i])
	{
		if (s1[i] > s2[i])
			return (13);
		else if (s1[i] < s2[i])
			return (-13);
		i++;
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
