#include "function_pointers.h"

/**
 * array_iterator - this function that Executes a function given as a
 *                  parameter on each element of an array.
 * @array: The array to be printed.
 * @size: The size of array.
 * @action: A pointer to the function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
