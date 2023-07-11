#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - ...
 * @width: int type
 * @height: int type
 *
 * Return: ...
 */
int **alloc_grid(int width, int height)
{
	int j, k, l, m;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (j = 0; j < height; j++)
	{
		a[j] = malloc(sizeof(int) * width);

		if (a[j] == NULL)
		{
			for (k = j; k >= 0; k--)
			{
				free(a[k]);
			}

			free(a);
			return (NULL);
		}
	}

	for (l = 0; l < height; l++)
	{
		for (m = 0; m < width; m++)
		{
			a[l][m] = 0;
		}
	}

	return (a);
}
