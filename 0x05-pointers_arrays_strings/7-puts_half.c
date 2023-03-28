#include "main.h"
#include <string.h>
/**
 * puts_half - this function that prints half
 * of a string, followed by a new line.
 * @str: the parameter
 */
void puts_half(char *str)
{
	int index, n;
	int len = strlen(str);

	if ((len % 2) == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;

	for (index = n; index <= len - 1; index++)
		_putchar(str[index]);
	_putchar('\n');
}
