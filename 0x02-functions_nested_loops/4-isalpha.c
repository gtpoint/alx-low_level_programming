#include "main.h"
#include <ctype.h>
/**
 * _isalpha - this is function that checks for alphabetic character
 *
 * @c: the character printed
 * Return: 1 if c is letter , 0 otherwise
 */
int _isalpha(int c)
{
	if (isupper(c) || islower(c))
		return (1);
	else
		return (0);
}
