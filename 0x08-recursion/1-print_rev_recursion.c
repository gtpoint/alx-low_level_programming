#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - this function,
 * Prints a string in reverse.
 * @s: The string to be printed.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
