#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - this function that Concatenates all arguments
 *             of the program into a string;
 *             arguments are separated by a new line in the string.
 * @ac: The number of arguments.
 * @av: An array of pointers to the arguments.
 *
 * Return: If ac == 0, av == NULL, or the function fails - NULL.
 *         Otherwise - a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int j, i, index, len = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}

	str = malloc(sizeof(char) * len + 1);

	if (str == NULL)
		return (NULL);

	index = 0;

	for (i = 0; i < ac; i++)
	{
		for (i = 0; av[i][j]; j++)
			str[index++] = av[i][j];

		str[index++] = '\n';
	}

	str[len] = '\0';

	return (str);
}
