#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - this function that Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list stringPtr;
	char *str;
	unsigned int i = 0;

	va_start(stringPtr, n);

	while (i < n)
	{
		str = va_arg(stringPtr, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		i++;
		if (i != n && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(stringPtr);
}
