#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints sums of diagonals
 * @a:matrix
 * @size:size of matrix col
 *
*/

void print_diagsums(int *a, int size)
{
	int i, j, sumd1, sumd2;
	int z;

	sumd1 = 0;
	sumd2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{

			z = *(a + (i * size) + j);

			if (i == j)
			{
				sumd1 += z;
			}
			if (i == (size - j - 1))
			{
				sumd2 += z;
			}
		}
	}
	printf("%d, %d\n", sumd1, sumd2);

}
