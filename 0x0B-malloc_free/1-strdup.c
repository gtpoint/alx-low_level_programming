#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - this function that Returns a pointer
 *           to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *dup;
	int len = strlen(str), i;

	if (str == NULL)
		return (NULL);

	dup = malloc(sizeof(*dup) * (len + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dup[i] = str[i];
	dup[len] = '\0';
	return (dup);
}
