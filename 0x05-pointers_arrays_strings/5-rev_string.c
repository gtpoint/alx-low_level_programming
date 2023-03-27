#include "main.h"
#include <string.h>
/**
 * rev_string - this function that reverses a string.
 * @s: the parameter to be printed
 */
void rev_string(char *s)
{
	int index;
	char Rev;
	int len = strlen(s);

	for (index = 0; index < len / 2; index++)
	{
		Rev = s[index];
		s[index] = s[len - 1 - index];
		s[index - 1 - len] = Rev;
	}
}
