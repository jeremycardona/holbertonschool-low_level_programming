#include <stdio.h>
/**
 * main - entry point
 * Description: print argv
 * Return: success
 * @argc: argument count
 * @argv: argument vector of strings
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
