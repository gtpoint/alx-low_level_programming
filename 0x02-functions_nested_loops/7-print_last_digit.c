#include "main.h"

/**
 * print_last_digit - function Prints the last digit of a number.
 * @n: The number.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int n)
{
	int last_digit_number = n % 10;

	if (last_digit_number < 0)
	{
		last_digit_number *= -1;
	}
	_putchar(last_digit_number + '0');
	return (last_digit_number);
}
