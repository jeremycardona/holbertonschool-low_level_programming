#include "main.h"
#include <stdlib.h>
/**
 * _strpbrk - search a string for any of a set of bytes
 * Description: function that locates te first occurence in the string
 * 's' of any of the bytes in the string accept.
 * Return: something.
 * @s: string
 * @accept: any bytes in string 's'
 */
int _strlen(char *);

char *_strpbrk(char *s, char *accept)
{
	int i;
	int l = _strlen(s);
	
	if (s == 0)
	{
		for (i = 0; i < l; i++)
		{
			if (s([i][0]) == accept)
				return (s);
		}
	}
	return (NULL);
}
