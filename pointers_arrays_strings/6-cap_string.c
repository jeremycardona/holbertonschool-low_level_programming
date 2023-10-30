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
	char s[] = {' ', ',', '.', '!', '?', '"', ')', '(', '{', '}'};

	while (str[i])
	{
		j = 0;
		c = str[i];
		if (c >= 'a' && c <= 'z' && str[i - 1] != '.')
			c = (int)c - 32;
		str[i] = c;

		while (str[i] != s[j] && str[i] != '\n' && str[i] != '\t')
		{
			if ('\0' == s[j])
			{
				j = 0;
				i++;
			}
			else if (str[i] == s[j] || str[i] == '\n' || str[i] == '\t')
			{
				i++;
				continue;
			}
			else
			{
				i++;
			}
		}
		i++;
	}
	return (str);
}
