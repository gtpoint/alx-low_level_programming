#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int hash, index;

	if (size > 0)
	{
		for (hash = 0; hash < size; hash++)
		{
			for (index = 0; index < size; index++)
			{
				if (index < ((size - 1) - hash))
					_putchar(' ');
				else
					_putchar('#');
			}

			if (hash == size - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
