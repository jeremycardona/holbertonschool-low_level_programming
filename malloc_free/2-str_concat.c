#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenate two strings
 * Description: concatenate two strings s1 and s2.
 * Return: pointer should point to a newly allocated space in mry
 * @s1: string one
 * @s2: string two
 */
char *str_concat(char *s1, char *s2)
{
	int s1_len = strlen(s1);
	int s2_len = strlen(s2);
	char *s3 = malloc(s1_len + s2_len + 1);

	if (s3)
	{
		if (!s1)
			strcpy(s3, "");
		if (!s2)
			strcat(s3, "");
		if (s1_len > 0)
			strcpy(s3, s1);
		if (s2_len > 0)
			strcat(s3, s2);

		return (s3);
	}
	return (NULL);

}
