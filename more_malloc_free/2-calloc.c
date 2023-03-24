#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - allocates memory and initializes it to 0
 * @nmemb: number of elements in allocation array
 * @size: size of element to allocate
 * Return: Pointer to allocated memory if fail NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	char *aux;
	unsigned int i;

	i = 0;

	if (nmemb == 0 || size == 0)
		return (0);

	array = malloc(nmemb * size);
	if (array == NULL)
		return (0);

	aux = array;
	for (i = 0; i < (nmemb * size); i++)
	{
		aux[i] = 0;
	}

	return (array);
}
