#include <stdio.h>
#include <stdlib.h>

/**
 * main - this function that Prints the opcodes of itself.
 * @argc: The number of arguments.
 * @argv: An array of arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int arg, i;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	arg = atoi(argv[1]);

	if (arg < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < arg; i++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (i == arg - 1)
			continue;
		printf(" ");

		address++;
	}

	printf("\n");

	return (0);
}
