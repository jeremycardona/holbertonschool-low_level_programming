#include <stdio.h>
/**
 * main - entry point
 *
 * Return: sucess
 *
 * Description: Print all the numbers of base 16
 * in lowercase.
 */
int main(void)
{
	char hexadec;

	for (hexadec = '0'; hexadec <= '9'; hexadec++)
		putchar(hexadec);
	for (hexadec = 'a'; hexadec <= 'f'; hexadec++)
		putchar(hexadec);
	putchar('\n');
	return (0);

}
