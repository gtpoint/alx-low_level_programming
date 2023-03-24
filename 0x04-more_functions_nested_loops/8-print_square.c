#include "main.h"

/**
 * print_square - Pthis function rints a squareusing the character #.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int row, col;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (col = 0; col < size; col++)
				_putchar('#');

			if (row == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
