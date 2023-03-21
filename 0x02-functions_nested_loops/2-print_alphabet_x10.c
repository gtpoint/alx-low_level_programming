#include "main.h"
/**
 * print_alphabet_x10 - this function prints 10 times the alphabet in lowercase
 *
 */
void print_alphabet_x10(void)
{
	char c;
	int index;

	for (index = 0; index <= 9; index++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
