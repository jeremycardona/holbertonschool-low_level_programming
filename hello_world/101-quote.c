#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 *
 * Return: 1 (failure)
 *
 * Description: A program that prints a string to the stderr
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar,\
2015-10-19\n", 59);
	close(2);
	return (1);
}
