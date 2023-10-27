#include <limits.h>
#include <stdio.h>

int _pow(int, int);
int int_signs(char *);
int count_all_nums(char *);
int _strlen(char *);
int get_int(char *);
/**
 * _atoi - Convert string to an integer
 * Description: Conver a string to an integer.
 * The number in the string can be precededed by an infinite num
 * of characters. Take account all the - and + sign before the number
 * Return: 0 if no numbers in the string, an integer otherwise.
 * @s: string to be converted to int.
 */
int _atoi(char *s)
{
	int s_nums = count_all_nums(s);
	int result = 0;

	if (s_nums > 0)
	{
		result = get_int(s);
	}

	if (result == INT_MIN)
		return (INT_MIN);
	if (result == INT_MAX)
		return (result);

	result *= int_signs(s);
	return (result);
}
/**
 * int_signs - Account all the - and + signs
 * Description: Account all the signs before the number.
 * Return: the sign that the num is going to have.
 * @s: a string.
 */
int int_signs(char *s)
{
	int converter = 1, i = 0;

	do {
		if (s[i] == '-')
			converter *= -1;
		else if (s[i] == '+')
			converter *= 1;
		else if (s[i] >= '0' && s[i] <= '9')
			return (converter);

		i++;
	} while (s[i] != '\0');

	return (converter);
}

/**
 * count_all_nums - count characters between 0 and 9
 * Description: count characters between 0 and 9, for each
 * digit increments count.
 * Return: the digit count
 * @s: a string
 */
int count_all_nums(char *s)
{
	int count = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			count++;
		}
		else if (count > 0)
			break;

	}
	return (count);
}

/**
 * _strlen - return the length of a string
 * Description: Function that returns the length of
 * a string.
 * Return: Length of s
 * @s: String.
 */
int _strlen(char *s)
{
	int len = 0;

	if (s != 0)
	{
		int i;

		for (i = 0; *s != '\0'; i++)
		{
			len++;
			s++;
		}
	}
	return (len);
}
/**
 * _pow - power of a number
 * Description: power of a base and exponent.
 * Return: Base elevated to the power
 * @base: integer base
 * @exponent: integer exponent
 */
int _pow(int base, int exponent)
{
	int i, pow = 1;

	for (i = 0; i < exponent; ++i)
		pow *= base;

	return (pow);
}
/**
 * get_int - get int in string
 * Description: get ints before end of line or blank space
 * Return: ints from string
 * @s: string to be parsed
 */
int get_int(char *s)
{
	int result = 0, s_i = 0;
	int digit, digit_place;
	int s_nums = count_all_nums(s);
	int num_index, neg = 1;

	digit_place = s_nums - 1;

	while (s[s_i] != '\0')
	{
		if (s[s_i] == '-')
		{
			neg = 0;
			s_i++;
			continue;
		}
		if (s[s_i] >= '0' && s[s_i] <= '9')
		{
			while (s[s_i] != ' ' && s[s_i] != '\0')
			{
				num_index = s_i;
				digit = s[num_index] - '0';
				if (digit > 0)
					digit = digit * _pow(10, digit_place);
				if (neg == 0 && result >= 2147483640 / 10)
				{
					return (INT_MIN);
				}
				if (neg == 1 && result >= 2147483640 / 10)
					return (INT_MAX);
				result += digit;
				digit_place--;
				s_i++;
			}
			break;
		}
		s_i++;
	}
	return (result);
}
