#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers.
 * @array: pointer to the first element of the array
 * @size: number of elements in array.
 * @value: the value to search for.
 * Return:  the first index where value is located 
 *         - otherwise, value is -1
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i = 0;

    if (array == NULL) {
        return -1;
    }

    while (i < size) {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value) {
            return i;
        }
        i++;
    }

    return -1;
}
