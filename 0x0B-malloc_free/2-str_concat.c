#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated.
 * @s2: The string to be concatenated to @s1.
 *
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer the newly-allocated space in memory
 *                     containing the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, index_concat = 0;
	int len1 = strlen(s1), len2 = strlen(s2);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	concat = malloc(sizeof(char) * (len1 + len2));

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat[index_concat++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat[index_concat++] = s2[i];

	return (concat);
}
