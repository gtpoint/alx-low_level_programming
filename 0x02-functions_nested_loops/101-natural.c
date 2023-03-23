#include <stdio.h>

/**
 * main - this fucntion lists all the natural numbers below 1024 (excluded)
 *        that are multiples of 3 or 5.
 *
 * Return: Always 0.
 */
int main(void)
{
	int index, sum = 0;

	for (index = 0; index < 1024; index++)
	{
		if ((index % 3) == 0 || (index % 5) == 0)
			sum += index;
	}

	printf("%d\n", sum);

	return (0);
}
