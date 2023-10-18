#include "main.h"

/**
 * print_alphabet - print alphabet
 * Description: print the alphabet in lowercase
 */
void print_alphabet(void)
{
	char element;

	for (element = 'a'; element <= 'z'; element++)
	{
		_putchar(element);
	}
	_putchar('\n');
}
