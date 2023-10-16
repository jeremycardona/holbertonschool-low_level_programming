#include <stdio.h>
/**
 * main - entry point
 *
 * Return: sucess
 *
 * Description: a program that prints the alphabet
 * in lowercase, with the exception of q and e
 */
int main(void)
{
	char letter = 'a';

	for (; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
	}
	putchar('\n');
	return (0);

}
