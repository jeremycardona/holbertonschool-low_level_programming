#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - pointer func that makes operation
 * Description: pointer function that makes an arithmetic op.
 * Return: int or null
 * @s: string
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 10)
	{
		if (s[0] == ops->op[i])
			break;
		i++;
	}
	return (ops[i / 2].f);
}
