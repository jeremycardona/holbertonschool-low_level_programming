#include <stdio.h>
/**
 * _strspn - get the length of a prefix substrings
 * Description: function that gets the length of a prefix
 * substring.
 * Return: a number of bytes in the initial segment of s which
 * consist only of bytes from accept
 * @s: initial segment string
 * @accept: bytes only from substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int num_bytes;
	int j;

	for (num_bytes = 0; s[num_bytes]; num_bytes++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[num_bytes] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (num_bytes);
}
