#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Return: sucess
 * Description: call function print_alphabet.
 */
int main(void)
{
	print_alphabet();
	return (0);
}
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
