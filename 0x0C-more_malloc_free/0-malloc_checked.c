#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - this function that allocates memory using malloc.
 *
 * @b: the parameter.
 * Return: pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}