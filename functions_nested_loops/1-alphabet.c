#include <stdio.h>
#include "main.h"

void print_alphabet(void);
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
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		printf("%c", letter);
	printf("\n");
}
