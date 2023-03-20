#include <stdio.h>
/**
 * main - this is the main function
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 15; i++)
	{
		if (i <= 9)
		{
			printf("%d", i);
		}
		else
		{
			if (i == 10)
				printf("a");
			else if (i == 11)
				printf("b");
			else if (i == 12)
				printf("c");
			else if (i == 13)
				printf("d");
			else if (i == 14)
				printf("e");
			else if (i == 15)
				printf("f\n");
		}
	}
	return (0);
}
