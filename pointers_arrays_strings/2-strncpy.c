/**
 * _strncpy - copy a string
 * Description: function similar to stdlib.
 * Return: Dest string replaced by src
 * @dest: string to be replaced
 * @src: string replacement
 * @n: number of chars that will be replaced
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (n--)
	{
		if (src[i] != "")
			dest[i] = src[i];
		if (!src[i])
			break;
		i++;
	}
	return (dest);
}
