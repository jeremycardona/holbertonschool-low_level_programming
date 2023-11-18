#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - entry point
 * Description: perform simple operations
 * Return: success 0, 98 error, 99 error, 100 error
 * @argc: argument count
 * @argv: argument vector
 */

int main(int argc, char **argv)
{
	int num1, num2;
	char o;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	o = argv[2][0];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (num2 == 0 && (o == '/' || o == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	operation = get_op_func(argv[2]);
	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", operation(num1, num2));
	return (0);
}
