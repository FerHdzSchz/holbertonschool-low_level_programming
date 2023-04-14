#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints Dec2bin
 * @n: unsigned integer
 *
*/

void print_binary(unsigned long int n)
{
	int c, j;
	unsigned long int aux_n = n;

	j = 0;
	for (c = 1; c <= 64; c++)
		{
		aux_n >>= 1;
		if (aux_n > 0)
		{
			j++;
		}
	}

	for (c = 1; c <= j + 1; c++)
	{
		_putchar(n & 1 << j ? '1' : '0');
		n <<= 1;
	}

}
