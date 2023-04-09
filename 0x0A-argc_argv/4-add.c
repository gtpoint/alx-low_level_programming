#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Prints the addition of positive numbers,
 *        followed by a new line.
 * @argc: argument count .
 * @argv: An array of pointers to the arguments.
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int pos, arg, sum;

	for (arg = 1; arg < argc; arg++)
	{
		pos = 0;
		while (argv[arg][pos])
		{
			if (!isdigit(argv[arg][pos]))
			{
				printf("Error\n");
				return (1);
			}
			pos++;
		}
		sum += atoi(argv[arg]);
	}
	printf("%d\n", sum);
	return (0);
}
