#include <stdio.h>
/**
 * main - print all arguments it receives
 * Return: success
 * Description: print all strings in argument vector.
 * @argc: argument count
 * @argv: vector of argument strings
 */
int main(int argc, char **argv)
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
