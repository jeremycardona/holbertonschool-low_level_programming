#include <stdio.h>
/**
 * _memset - fill memory with a constant byte
 * Description: fill the first n bytes of the memory area pointed
 * by s with a constant byte b.
 * Return: pointer to memory area s.
 * @s: string
 * @b: byte
 * @n: n bite.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char **pps;

	pps = &s;
	while (n--)
	{
		if (s)
		{
			**pps = b;
			s++;
		}
	}
	return (s);
}
