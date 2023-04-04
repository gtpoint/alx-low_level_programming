#include "main.h"
#include <string.h>
/**
 * _strstr - locates a substring
 * @haystack: string to be searched in
 * @needle: string to be searched
 *
 * Return: Returns a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, flag = 0;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		int j = 1;

		if (haystack[i] == needle[0])
		{
			while (needle[j] != '\0')
			{
				if (haystack[i + j] != needle[j])
				{
					flag = 0;
					break;
				}
				else
					flag = 1;
				j++;
			}
			if (flag)
				break;
		}
	}
	if (flag)
		return (haystack + i);
	else
		return (NULL);
}
