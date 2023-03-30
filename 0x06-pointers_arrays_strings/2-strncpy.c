#include "main.h"
#include <string.h>
/**
 * _strncpy - this function that copies a string
 *
 * @dest: the first parameter
 * @src: the second parameter
 * @n: the number of caracter
 * Return: the result of copies
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int len;

	len = strlen(src);
	for (i = 0; i < n; i++)
		dest[i] = src[i];
	for (i = len; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
