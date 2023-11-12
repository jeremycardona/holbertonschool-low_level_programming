#include <stdlib.h>
#include <string.h>
/**
 * argstostr -concatenate all the arguments of your program
 * Description: concatenate all the arguments of ur program
 * Return: Null if ac = 0 or av = null, return a pointer to
 * a new string or null if i fails
 * @ac: argument count
 * @av: argument vector
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int arg_len = 0;
	int i, newline_count = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		arg_len += strlen(av[i]);
		newline_count++;
	}

	str = malloc((arg_len + newline_count) * sizeof(*str));
	if (!str)
	{
		free(str);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		if (i == 0)
		{
			str = strcpy(str, av[i]);
			str[strlen(str)] = '\n';
		}
		else
		{
			str = strcat(str, av[i]);
			str[strlen(str)] = '\n';
		}

	}
	return (str);
}
