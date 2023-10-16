#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: success
 *
 * Description:Program that outputs
 * the last digit of an integer, if the last
 * digit is greater than 5
 * if the last digit of n is 0
 * if the last digit of n is less than 6 and not 0
 */
int main(void)
{
	int n;
	short int lastDigitN; 
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigitN = n % 10; 
	if (lastDigitN > 5)
	{
		printf("The last digit of %d is %d and is greater than 5\n", n, lastDigitN);
	}
	else if (lastDigitN == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDigitN);
		
	}
	else if (lastDigitN < 6 && lastDigitN != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	return (0);
}
