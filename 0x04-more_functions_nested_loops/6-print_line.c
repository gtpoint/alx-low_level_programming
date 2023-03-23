#include "main.h"

/**
 * print_line - this function Draws a straight line using the character _.
 * @n: The number of _ to be printed.
 */
void print_line(int n)
{
	int index;

	if (n > 0)
	{
		for (index = 0; index < n; index++)
			_putchar('_');
	}

	_putchar('\n');
}
