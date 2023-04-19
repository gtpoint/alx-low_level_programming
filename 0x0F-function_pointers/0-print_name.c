#include "function_pointers.h"

/**
 * print_name - this function that Prints a name.
 * @name: The name to be printed.
 * @f: A pointer to a function that print the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
