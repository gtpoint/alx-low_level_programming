#include <stdio.h>
/**
 * main - this is the main function
 *
 * Return: always 0
 */
int main(void)
{
	int index;
	unsigned long num1 = 0, num2 = 1, sum;

	for (index = 0; index < 50; index++)
	{
		sum = num1 + num2;
		printf("%lu", sum);

		num1 = num2;
		num2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
