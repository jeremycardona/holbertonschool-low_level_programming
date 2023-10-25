#include "main.h"

/**
 * rev_string - Reverse a string
 * Description: Reverse a string.
 * @s: String to be reversed
 */
void rev_string(char *s)
{
	int s_len = _strlen(s), i;
	
	if (s != 0)
	{
		char temp, temp2;

		for (i = 0; i < s_len / 2; i++)
		{
			temp = s[i];
			temp2 = s[s_len - 1 - i];
			if (temp2 != '\0' || temp != '\0')
			{
				s[i] = temp2;
				s[s_len - 1 - i] = temp;
			}
		}
	}
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
