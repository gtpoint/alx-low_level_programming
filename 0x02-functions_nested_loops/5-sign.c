#include "main.h"
/**
 * print_sign - this is function that prints the sign of a number
 *
 * @n: the number chekced
 *
 * Return: 1 if n is greater than zero ,
 *         0 if n is zero ,
 *         -1 is n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
