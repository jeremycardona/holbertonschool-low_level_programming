#include <stdio.h>
/**
 * main - entry point
 *
 * Return: sucess
 *
 * Description: a program that prints the alphabet
 * in lowercase, followed by a new line.
 */
int main(void)
{
	char letter = 'a';

	for (; letter <= 'z'; letter++)
	{
		putchar(letter);
		putchar('\n');
	}
	return (0);

}
