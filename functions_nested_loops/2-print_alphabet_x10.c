#include "main.h"
/**
 * print_alphabet_x10 - print alphabet ten times
 * Description: print the alphabet ten times in lowercase.
 *
 */
void print_alphabet_x10(void)
{
	short int i;
	char elem;

	for (i = 0; i < 10; i++)
	{
		for (elem = 'a'; elem <= 'z'; elem++)
			_putchar(elem);
		_putchar('\n');
	}
}
