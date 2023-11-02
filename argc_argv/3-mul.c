#include <stdio.h>
/**
 * main - multiply two numbers
 * Description: Multiply two numbers and print the result.
 * Return: success
 * @argc: arg count
 * @argv: arg vector of strings
 */
int main(int argc, char **argv)
{
	if (argc > 1)
		printf("%d\n", argv[1] * argv[2]);
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
