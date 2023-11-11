#include <stdio.h>
/**
 * _memcpy - copies memory area
 * Description: copies n bytes from memory area src to memory
 * area dest.
 * Return: something.
 * @dest: receives copy
 * @src: copy
 * @n: bytes to copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *t_dest = dest;
	char *t_src = src;

	if (src)
	{
		while (n--){
			*t_dest = *t_src;
			t_dest++;
			t_src++;
		}
	}
	return (dest);
}
