#include "main.h"
#include <string.h>
/**
 * _strchr - locates a character in a string,
 * @s: string.
 * @c: character.
 * Return: the pointer to the first occurrence of the character @c.
 */
char *_strchr(char *s, char c)
{
	int i;
	int len = strlen(s);

	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (s[i] == c)
		return (s + i);
	return ('\0');
}
