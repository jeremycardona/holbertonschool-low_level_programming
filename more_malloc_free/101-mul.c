#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiply two positive numbers
 * Description: multiply two positive numbers, print result
 * Return: Success
 * @argc: argument count
 * @argv: argument vector
 */
int main(int argc, char **argv)
{
	unsigned long int num1;
	unsigned long int num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	
	if (isalpha(num1) && isalpha(num2))
	{
		printf("Error\n");
		exit(98);
	}
	printf("%lu\n", num1 * num2);
	return (0);
}
