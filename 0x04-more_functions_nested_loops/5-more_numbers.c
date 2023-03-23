#include "main.h"

/**
 * more_numbers - Prints the numbers from 0 to 14 ten times.
 */
void more_numbers(void)
{
	int index, count;

	for (count = 0; count <= 9; count++)
	{
		for (index = 0; index <= 14; index++)
		{
			if (index > 9)
				_putchar((index / 10) + '0');
			_putchar((index % 10) + '0');
		}
		_putchar('\n');
	}
}
