#include "main.h"

/**
 * print_triangle - print a triangle
 * description: print a triangle, followed by nwln.
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int blank = size - 1, hash, i = size;

	if (size < 1)
		_putchar('\n');
	while (size > 0)
	{
		while (blank--)
			_putchar(' ');

		for (hash = size; hash + blank < i; hash++)
			_putchar('#');

		_putchar('\n');
		size--;
		blank = size - 1;
	}
}
