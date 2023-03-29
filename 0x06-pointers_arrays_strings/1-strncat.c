#include "main.h"
#include <string.h>
/**
 * _strncat - this function that concatenates two strings.
 * @dest: the first parameter
 * @src: the second parameter
 * @n: the number of caracter concat
 * Return: return the result of concatenate two string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len_dest = strlen(dest);

	for (i = 0; i < n; i++)
		dest[len_dest + i] = src[i];
	dest[len_dest + i] = '\0';

	return (dest);
}
