#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - allocates and fills array from min to max
 * @min: lower limit of array
 * @max: upper limit of array
 * Return: pointer to the array if min > max return NULL
*/

int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min < max)
		return (0);
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (0);

	for (i = 0; i < (max - min + 1); i++)
	{
		array[i] = min + i;
	}

	return (array)
}
