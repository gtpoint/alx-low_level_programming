#include <stdio.h>
/**
 * main - this is the main function
 *
 * Return: always 0
 */
int main(void)
{
	int index, number1 = 1, number2 = 2, next;

	index = 0;
	while (index < 50)
	{
		next = number1 + number2;
		printf("%d", next);

		if (index == 49)
			break;
		printf(", ");
		index++;
	}
	printf("\n");
}
