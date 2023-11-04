#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int min_coins(int [], int, int);
/**
 * main - entry point
 * Description: blah
 * Return: success
 * @argc: argument count
 * @argv: argument vector
 */
int main(int argc, char **argv)
{
	int coins[5] = {25, 10, 5, 2, 1};
	int amount_to_int;
	int s = sizeof(coins) / sizeof(coins[0]);
	int change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount_to_int = atoi(argv[1]);
	if (amount_to_int < 0)
	{
		printf("0\n");
		return (0);
	}
	change = min_coins(coins, s, amount_to_int);
	printf("%d\n", change);
	return (0);
}
/**
 * min_coins - recursive sol to find min change
 * Description: solution to find minimun amount of change
 * Return: minimum number of coins
 * @c: array
 * @size: array size
 * @cents: value to find min num of coins
 */
int min_coins(int c[], int size, int cents)
{
	int result = INT_MAX;
	int i = 0, temp_result;

	if (cents == 0)
		return (0);
	for (; i < size; i++)
	{
		if (c[i] <= cents)
		{
			temp_result = min_coins(c, size, cents - c[i]);
			if (temp_result != INT_MAX && temp_result + 1 < result)
				result = temp_result + 1;
		}
	}
	return (result);
}
