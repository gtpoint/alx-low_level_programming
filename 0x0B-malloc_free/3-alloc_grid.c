#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - this function that Returns a pointer
 *              to a 2-dimensional array of
 *               integers with each element initalized to 0.
 * @width: The width.
 * @height: The height.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *         Otherwise - a pointer to the 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **dimns;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	dimns = malloc(sizeof(int *) * height);
	if (dimns == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		dimns[i] = malloc(sizeof(int) * width);
		if (dimns[i] == NULL)
		{
			for (; i >= 0; i--)
				free(dimns[i]);

			free(dimns);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			dimns[i][j] = 0;
	}

	return (dimns);
}
