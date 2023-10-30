#include <stdio.h>
/**
 * cap_string - capitalize each string
 * Description: meh gtg soon
 * Return: string capizalized
 * @str: string to be capitalized
 */
char *cap_string(char *str)
{
	int i = 0, j;
	char c;
	char separators[] = {' ', ',', '.', '!', '?', '"', ')', '(', '{', '}', \
		'\n', '\t'};

	while (str[i])
	{
		j = 0;
		c = str[i];
		if (c >= 'a' && c <= 'z')
			c = (int)c - 32;
		str[i] = c;

		while (str[i] != separators[j])
		{
			if (str[i] == separators[j])
			{
				++i;
				continue;
			}
			else if ('\0' == separators[j])
			{
				j = 0;
				i++;
			}
			else
			{
				j++;
				i++;
			}
		}
		i++;
	}
	return (str);
}
