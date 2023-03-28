#include"stdlib.h"
#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches an integer in an array
 * @array: pointer to array
 * @size: size in array
 * @cmp: pointer to the function to compare values with
 * Return: first element in index, if it finds it else -1
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int elem;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (elem = 0; elem < size; elem++)
	{
		if (cmp(array[elem]) != 0)
		{
			return (elem);
		}
	}
	return (-1);
}
