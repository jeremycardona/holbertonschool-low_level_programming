#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - sum two integers
 * Description: function that sums two integers
 * Return: operation result
 * @a: integer one
 * @b: integer two
 */
int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - subtract two integers
 * Description: function that subtracts two ints
 * Return: operation result
 * @a: integer one
 * @b: integer two
 */
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - multiply two integers
 * Description: function that multiply two int
 * Return: operation result
 * @a: integer one
 * @b: integer two
 */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - divide two integers
 * Description: function that divides two ints.
 * Return: operation result
 * @a: integer one
 * @b: integer two
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}


/**
 * op_mod - modulo two integers
 * Description: func that gives the modulo of two ints.
 * Return: operation result
 * @a: integer one
 * @b: integer two
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
