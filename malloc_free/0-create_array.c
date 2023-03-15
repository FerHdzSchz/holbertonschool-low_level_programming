#include "main.h"
#include <stdlib.h>
/**
 * *create_array - Creates an char array, intializes it with specific char
 *
 * @size: size of array
 * @c: character to initialize
 *
 * Return: char array, NULL if size 0, NULL if fails
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size > 0)
	{
		array = malloc(sizeof(char) * size);
		if (array == NULL)
		{
			return (0);
		}
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
	}
	else if (size == 0)
	{
		return (0);
	}

	return (array);
}
