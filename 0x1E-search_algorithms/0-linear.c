#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a specific value in an array of integers using
 *                the linear search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for in the array.
 *
 * Return: The function returns the index of the first occurrence of the
 *         'value' in the 'array'.
 *         - If 'value' is not found in the array or if 'array' is NULL, the
 *           function returns -1.
 *
 * Each step of the search is accompanied by a printed message in the format:
 * "Value checked array[INDEX] = [CURRENT_VALUE]" where INDEX is the current
 * index being checked, and CURRENT_VALUE is the value at that index.
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (array == NULL) {
        return -1;
    }

    // Iterate through the array to search for 'value'
    for (i = 0; i < size; i++) {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);

        // If the value is found, return the index
        if (array[i] == value) {
            return i;
        }
    }

    return -1;
}
