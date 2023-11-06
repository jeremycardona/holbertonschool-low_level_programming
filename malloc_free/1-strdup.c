#include <stdlib.h>
#include <string.h>
/**
 * _strdup - return a pointer to a newly allocated space in memory
 * Description: Return a pointer to a newly allocated space in
 * memory, hwich contains a cpy of the string given as a param
 * Return: on success a pointer to th duplacate, null on failure
 * @str: str to be duplicated
 */
char *_strdup(char *str)
{
	char *str_cpy;

	if (!str)
		return (NULL);

	str_cpy = malloc(strlen(str) + 1);
	if (str_cpy)
	{
		strcpy(str_cpy, str);
		return (str_cpy);
	}
	return (NULL);
}
