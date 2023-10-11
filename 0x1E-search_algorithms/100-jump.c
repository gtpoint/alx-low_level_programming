#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in an array of integers using Jump search.
 * @array: pointer to the first element of the array.
 * @size: number of elements in the array.
 * @value: the value to search for.
 * Return: the index where value is located or -1 if not found.
 */
int jump_search(int *array, size_t size, int value) {
    size_t step = (size_t)sqrt(size);
    size_t start = 0;
    size_t end = step;

    if (array == NULL) {
        return (-1);
    }

    printf("Value checked array[%lu] = [%d]\n", start, array[start]);
    while (end < size && array[end] < value) {
        printf("Value checked array[%lu] = [%d]\n", end, array[end]);
        start = end;
        end += step;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", start, end);

    while (start <= end && start < size) {
        printf("Value checked array[%lu] = [%d]\n", start, array[start]);
        if (array[start] == value) {
            return (start);
        }
        start++;
    }

    return (-1);
}
