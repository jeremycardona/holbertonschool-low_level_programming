#include <stdio.h>
#include <stdlib.h>
/**
 * main - add positive numbers
 * Description: program that add numbers
 * Return: success, or unsucessful if wrong arguments
 * @argc: argument count
 * @argv: argument vector
 */
int main(int argc, char **argv)
{
	int i = 0, sum = 0;

	for (; i < argc; i++)
	{
		if (*argv[i] >= 'a' && *argv[i] <= 'z')
		{
			printf("Error\n");
			return (1);
		}
		if (*argv[i] >= 'A' && *argv[i] <= 'Z')
		{
			printf("Error\n");
			return (1);
		}
	}
	i = 1;
	for (; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
