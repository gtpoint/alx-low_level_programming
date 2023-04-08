#include "main.h"
#include <string.h>
/**
 * _strcat - this function that concatenates two strings.
 * @dest: the first parameter
 * @src: the second parameter
 * Return: print the result of concatenate of two string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int len_dest = strlen(dest);
	int len_src = strlen(src);

	for (i = 0; i < len_src && src[i] != '\0'; i++)
		dest[len_dest + i] = src[i];
	dest[len_dest + i] = '\0';

	return (dest);
}
