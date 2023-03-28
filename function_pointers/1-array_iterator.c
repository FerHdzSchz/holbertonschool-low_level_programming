#include"stdlib.h"
#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Lapply simil.
 * @array: pointer to the array to apply the function
 * @size: size of the array
 * @action: function to apply
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int elem;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (elem = 0; elem < size; elem++)
		{
			action(array[elem]);
		}
	}

}
