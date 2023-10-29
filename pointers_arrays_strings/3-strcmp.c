/**
 * _strcmp - compare two strings
 * Description: Compare two strings.
 * Return: if 1st string greater than 2nd string 15, if 1st string less than
 * 2nd string -15, else 0
 * @s1: first string
 * @s2: second string
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i])
	{
		if (s1[i] > s2[i])
			return (15);
		else if (s1[i] < s2[i])
			return (-15);
		i++;
	}
	return (0);
}
