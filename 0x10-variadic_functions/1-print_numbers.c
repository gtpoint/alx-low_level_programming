#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - this function that Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list numbers;
	va_start(numbers, n);

	while (i < n)
	{
		printf("%d", va_arg(numbers, int));
		i++;

		if (i != n && separator != NULL)
			printf("%s", separator);
	}
	
	printf("\n");
	va_end(numbers);
}
