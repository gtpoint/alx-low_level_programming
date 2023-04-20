#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - this function that Returns the sum of all paramters.
 * @n: The number of paramters.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int s = 0;
	va_list sumPtr;

	if (n == 0)
		return (0);

	va_start(sumPtr, n);
	for (i = 0; i < n; i++)
		s += va_arg(sumPtr, int);

	va_end(sumPtr);
	return (s);
}
