#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers.
 * @array: pointer to the first element of the array.
 * @size: number of elements in the array.
 * @value: the value to search for.
 * Return: the index where value is located or -1 if not found.
 */
int binary_search(int *array, size_t size, int value) {
    size_t left, right, mid, i;
    left = 0;
    right = size - 1;
    
    if (array == NULL) {
        return -1;
    }

    while (left <= right) {
        mid = (right + left) / 2;
        
        printf("Searching in array: ");
        for (i = left; i < right; i++) {
            printf("%d, ", array[i]);
        }
        printf("%d\n", array[right]);

        if (array[mid] == value) {
            return mid;
        } else if (array[mid] < value) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}
