/**
 *
 */
char *leet(char *str)
{
	char e[] = "aAeEoOtTlL";
	int *r = {4, 3, 0, 7, 1};
	int i = 0, j;

	while (str[i])
	{
		j = 0;
		while (e[j] != '\0')
		{
			
			if (str[i] == e[j])
			{
				str[i] = r[j/2];
				continue;
			}
			j++;
		}
		i++;
	}
	return (str);
}
