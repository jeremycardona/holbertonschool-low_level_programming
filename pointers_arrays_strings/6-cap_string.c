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
		if (c >= 'a' && c <= 'z')
			c = (int)c - 32;
		str[i] = c;

		while (str[i] != s[j] && str[i] != '\n' && str[i] != '\t')
		{
			if ('\0' == s[j])
			{
				j = 0;
				i++;
				continue;
			}
			else if (str[i] == s[j] || str[i] == '\n' || str[i] == '\t')
			{
				continue;
			}
			j++;
		}
		i++;
	}
	return (str);
}
