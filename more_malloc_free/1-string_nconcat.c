#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenate two strings
 * Description: concatenate two strings, limit s2 by n
 * Return: a pointer to a newly allocated space in memory
 * @s1: string one
 * @s2: string two
 * @n: first n bytes of s2 to use
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = strlen(s1);
	unsigned int s2_len = strlen(s2);
	char *s3;

	if (n >= s2_len)
		s3 = malloc((s1_len + s2_len) * sizeof(*s3) + 1);
	else
	{
		s2_len = n;
		s3 = malloc((s1_len + s2_len) * sizeof(*s3) + 1);
	}
	if (!s3)
	{
		free(s3);
		return (NULL);
	}
	if (s1 && s2 && s3)
	{
		strcpy(s3, s1);
		if (s2_len == n)
			strncat(s3, s2, n);
		else (s2_len > 0)
			strcat(s3, s2);
	}
	if (!s1 && s3)
	{
		s1 = "";
		strcpy(s3, s1);
	}
	if (!s2 && s3)
	{
		s2 = "";
		strcat(s3, s2);
	}
	
	return (s3);
}
