#include "main.h"
#include <stdio.h>

/**
 * print_array - Print n number of elements in array
 *
 * @a: array to print
 * @n: number of elements to print
 *
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
			printf("%c ", ',');
		}
	printf("\n")
	}
}
