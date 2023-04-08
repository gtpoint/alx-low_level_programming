#include "main.h"
#include <ctype.h>
/**
 * _islower - this is function that checks for lowercase char
 *
 * @c: the character checking
 * Return: if character is lower success 1, 0 otherwise.
 *
 * on error, -1 returned
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
		return (0);
}
