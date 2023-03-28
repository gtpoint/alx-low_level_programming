#include "main.h"
#include <string.h>
/**
 * puts2 - this function that prints every other
 * character of a string, starting with the
 * first character, followed by a new line.
 * @str: the parameter
 */
void puts2(char *str)
{
	int index;
	int len = strlen(str);

	for (index = 0; index <= len - 1; index+=2)
		_putchar(str[index]);
	_putchar('\n');
}
