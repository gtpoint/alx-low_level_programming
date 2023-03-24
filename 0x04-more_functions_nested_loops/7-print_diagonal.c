#include "main.h"
/**
 * print_diagonal - this function that draws a diagonal on the terminal
 * @n: the number be printed
 */
void print_diagonal(int n)
{
	int row, column;

	if (n > 0)
	{
		for (row = 0; row < n; row++)
		{
			for (column = 0; column < row; column++)
				_putchar(' ');

			_putchar('\\');

			if (row == n - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
