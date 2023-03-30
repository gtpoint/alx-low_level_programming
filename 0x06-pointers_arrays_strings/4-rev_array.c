#include "main.h"
/**
 * reverse_array - this function that reverses
 *                 the content of an array of integers.
 * @a: the array to be printed
 * @n: number of element
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
