#include <stdio.h>

/**
 * main - fizz buzz
 * Return: success
 * Description: Print numbers 1 to 100. For multiples
 * of 3 print fizz, for multiples of 5 print buzz.
 * Numbers that are both multiples 3 and 5 fizzbuzz
 */
int main(void)
{
	int i = 1;

	for (; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i < 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
