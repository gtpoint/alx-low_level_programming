#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - this function that Concatenates two strings using at
 *                  most an inputted number of bytes @n.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	int len_s1 = strlen(s1);
	unsigned int i;

	if ( s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	concat = malloc(sizeof(char) * (len_s1 + n + 1));
	
	if (concat == NULL)
		return (NULL);
	
	len_s1 = 0;

	for (i = 0; s1[i] != '\0'; i++)
		concat[len_s1++] = s1[i];
	
	for (i = 0; i < n && s2[i] != '\0'; i++)
		concat[len_s1++] = s2[i];

	concat[len_s1] = '\0';

	return (concat);
}
