#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * interpolation_search_recursive - Helper function for 
            recursive interpolation search.
 * @array: pointer to the first element of the array to search in.
 * @low: the low index of the current search range.
 * @high: the high index of the current search range.
 * @value: the value to search for.
 * Return: the first index where value is located or -1 if not found.
 */
int interpolation_search_recursive(int *array, size_t low, size_t high, int value) {
    if (low <= high && value >= array[low] && value <= array[high]) {
        size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

        if (pos < low || pos > high)
        {
            printf("Value checked array[%lu] is out of range\n", pos);
            return (-1);
        }

        printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

        if (array[pos] == value)
          return (pos);

        if (array[pos] < value) {
            return interpolation_search_recursive(array, pos + 1, high, value);
        } else {
            return interpolation_search_recursive(array, low, pos - 1, value);
        }
    }

    printf("Value checked array[%lu] is out of range\n", low);
    return (-1);
}

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in the array.
 * @value: the value to search for.
 * Return: the first index where value is located or -1 if not found.
 */
int interpolation_search(int *array, size_t size, int value) {
    if (array == NULL)
      return (-1);

    return interpolation_search_recursive(array, 0, size - 1, value);
}
