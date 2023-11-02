#include <stdio.h>
/**
 * main - entry point
 * Return: success
 * Description: print number of argc
 * @argc: argument count
 * @argv: argument vector
 */
int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	(**argv);
	return (0);
}
