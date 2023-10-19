#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * Return: the value of the last digit
 * Description: Print the last digit of a number. That is
 * the decimal place.
 * @number: A number to compute it's last digit
 */
int print_last_digit(int number)
{
	int last_digit = number % 10;

	_putchar('0' + last_digit);
	return (last_digit);

}
