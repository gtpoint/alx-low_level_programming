#include "main.h"
#include <ctype.h>
/**
 * _isdigit - this fucntion that checks for a digit (0 throught 9)
 * @c: the character checked
 * Return: 1 if character is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
