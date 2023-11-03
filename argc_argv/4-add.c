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
	int i = 1, sum = 0, j;


	printf("%c\n", argv[0] + 0);
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (; i < argc; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
			{
				printf("Error\n");
				return (1);
			}
			j++;
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
