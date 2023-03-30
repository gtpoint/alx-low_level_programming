#include "main.h"
#include <ctype.h>
/**
 * string_toupper - this function that changes
 *      all lowercase letters of a string to uppercase.
 * @str: the parameter
 * Return: the result of @str in uppercase
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
	return (str);
}
