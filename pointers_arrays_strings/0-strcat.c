#include <stdio.h>
#include "main.h"
/**
 * _strcat - concatenate two strings
 * Description: contatenate two strings, append the src to the dest,
 * overwriting the null at the end of dest.
 * Return: pointer to the resulting string dest
 * @dest: string overwritten
 * @src: string to be appended
 */

char *_strcat(char *dest, char *src)
{
	int i_dest = 0, i = 0;
	int dest_len = _strlen(dest);

	while (dest[i_dest])
	{
		if (src[i] != '\0')
		{
			dest[dest_len + i] = src[i];
			i++;
			i_dest++;
		}
		else
		{
			dest[dest_len + i] = '\0';
			break;
		}

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
