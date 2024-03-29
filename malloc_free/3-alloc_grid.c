#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * **alloc_grid - allocate a 2d array
 * @width: width of 2d array
 * @height: height of 2d array
 *
 * Return: pointer to array and null if w and h < 0
*/



int **alloc_grid(int width, int height)
{
	int w;
	int h;
	int **array2d = (int **) malloc(sizeof(int *) * height);

	h = 0;
	w = 0;

	if (width <= 0 || height <= 0 || array2d == NULL)
	{
		free(array2d);
		return (0);
	}

	for (h = 0;  h < height; h++)
	{
		array2d[h] = (int *)malloc(width * sizeof(int));
		if (array2d[h] == NULL)
		{
			for (w = 0; w < h; w++)
			{
				free(array2d[w]);
			}
			free(array2d);
			return (0);
		}
		for (w = 0; w < width; w++)
		{
			array2d[h][w] = 0;
			/*printf("arr[%d][%d] = %d\n", h,w, array2d[h][w]);*/
		}
	}

	return (array2d);
}
