/*
 * File: 100-print_comb3.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>
/**
 * main - this is the main function
 * Return: always 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i == 8 && j == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
