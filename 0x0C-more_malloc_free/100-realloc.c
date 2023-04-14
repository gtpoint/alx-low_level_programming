#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - this function that Reallocates a memory
 *            block using malloc and free.
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size in bytes of the allocated space for ptr.
 * @new_size: The size in bytes for the new memory block.
 *
 * Return: If new_size == old_size - ptr.
 *         If new_size == 0 and ptr is not NULL - NULL.
 *         Otherwise - a pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr_new;
	unsigned int size;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	ptr_new = malloc(new_size);
	
	if (ptr_new == NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (old_size < new_size)
		size = old_size;
	else
		size = new_size;

	memcpy(ptr_new, ptr, size);
	free(ptr);

	return (ptr_new);
}
