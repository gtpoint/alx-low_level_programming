#include <ctype.h>
#include "main.h"
/**
 * _isupper - this function that checks for uppercase character.
 *
 * @c: the check character
 * Return: 1 if character is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
