#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - this is function that prints all natural
 * numbers from number input to 98
 * @n: the target number
 */
void print_to_98(int n)
{
	int i;

	i = n;
	if (n > 98)
	{
		while (i >= 98)
		{
			printf("%d", i);

			if (i == 98)
				break;
			printf(", ");
			i--;
		}
		printf("\n");
	}
	else if (n < 98)
	{
		while (i <= 98)
		{
			printf("%d", i);

			if (i == 98)
				break;
			printf(", ");
			i++;
		}
		printf("\n");
	}
	else
	{
		printf("%d\n", n);
	}
}
