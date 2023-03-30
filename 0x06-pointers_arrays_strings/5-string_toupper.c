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
	int index;

	while (str[index])
	{
		str[index] = toupper(str[index]);
		index++;
	}
	return (str);
}
