#include "main.h"
#include <string.h>
/**
 * print_rev - this function that prints a string,
 * in reverse, followed by a new line.
 * @s: the parameter to be printed
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
