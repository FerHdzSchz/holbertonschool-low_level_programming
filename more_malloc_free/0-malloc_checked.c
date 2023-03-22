#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - check if malloc is not correct
 * @b: bytes to allocate
 * Return: pointer to allocated memory and 98 if malloc fails
*/

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
