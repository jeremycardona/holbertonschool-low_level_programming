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
	char *s3 = malloc(strlen(s1) + strlen(s2) + 1);

	if (s1 == NULL)
		*s1 = ' ';
	if (s2 == NULL)
		*s2 = ' ';
	if (s3)
	{
		strcpy(s3, s1);
		strcat(s3, s2);
		return (s3);
	}
	return (NULL);

}
