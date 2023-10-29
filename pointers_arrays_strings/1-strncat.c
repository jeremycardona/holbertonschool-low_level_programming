#include "main.h"
/**
 *
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _strlen(dest);
	int i = 0, i_dest = 0;

	while (dest[i_dest])
	{
		if (src[i] != '\0')
		{
			if (n != 0)
			{
				dest[dest_len + i] = src[i];
				i++;
				i_dest++;
			}
			else
			{
				break;
			}
		}
		else
		{
			dest[dest_len + i] = '\0';
			break;
		}
		n--;
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
