#include "main.h"
#include <stdlib.h>

/**
 * _calloc - this function that Allocates memory for an array
 *           of a certain number
 *           of elements each of an inputted byte size.
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 *         Otherwise - a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *fill;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	fill = ptr;

	for (i = 0; i < (size * nmemb); i++)
		fill[i] = '\0';

	return (ptr);
}
