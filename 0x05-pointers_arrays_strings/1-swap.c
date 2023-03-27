#include "main.h"
/**
 * swap_int - this function that swaps the values of two integers.
 * @a: parameter one
 * @b: parameter two
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
