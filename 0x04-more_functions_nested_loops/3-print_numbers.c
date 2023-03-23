#include "main.h"

/**
 * print_numbers - Prints the numbers from 0-9.
 */
void print_numbers(void)
{
	int index;

	for (index = 0; index <= 9; index++)
		_putchar(index + '0');

	_putchar('\n');
}
