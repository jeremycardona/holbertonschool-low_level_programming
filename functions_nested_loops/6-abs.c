#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 * Return: The absolute value of the int
 * Description: compute the absolute value of an integer.
 * @param: the integer to be computed
 */
int _abs(int param)
{
	if (param < 0)
		return (-1 * param);
	return (param);
}
