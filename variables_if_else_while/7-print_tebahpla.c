#include <stdio.h>
/**
 * main - entry point
 *
 * Return: sucess
 *
 * Description: a program that prints the alphabet
 * in reverse,
 * in lowercase, followed by a new line.
 */
int main(void)
{
	char letter = 'z';

	for (; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);

}
