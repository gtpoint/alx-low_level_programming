#include <stdio.h>
/**
 * main - this is the main function
 * Return: always 0
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 7; i++)
	{
		for (j = (i + 1); j <= 8; j++)
		{
			k = (j + 1);
			while (k <= 9)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				if (i == 7 && j == 8 && k)
					break;

				putchar(',');
				putchar(' ');
				k++;
			}
		}
	}
	putchar('\n');
	return (0);
}
