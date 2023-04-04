#include "main.h"
#include <string.h>
/**
 * _strspn - this function gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, bool;
	unsigned int len_s = strlen(s);
	unsigned int len_accept = strlen(accept);

	for (i = 0; i < len_s; i++)
	{
		bool = 1;
		for (j = 0; j < len_accept; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (i);
}
