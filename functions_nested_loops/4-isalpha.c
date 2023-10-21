#include "main.h"
/**
 * _isalpha - check for alphabetic character
 * Return: 1 if c is letter, 0 otherwise
 * Description: Check for alphabetic character
 * lowercase or uppercase
 * @c: the character to be checked
 */

int _isalpha(int c)
{
	char alpha_elem;

	for (alpha_elem = 'a'; alpha_elem <= 'z'; alpha_elem++)
	{
		if (alpha_elem == c)
			return (1);
	}
	for (alpha_elem = 'A'; alpha_elem <= 'Z'; alpha_elem++)
	{
		if (alpha_elem == c)
			return (1);
	}
	return (0);
}
