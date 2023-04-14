#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - Bin2Dec
 * @b: string of 1 or 0
 * Return: decimal representation
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int idx, strlen, digit, power, i, decimal;

	idx = 0;
	strlen = 0;
	decimal = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*(b + strlen) != '\0')
		strlen++;

	strlen--;

	for (; strlen >= 0; strlen--)
	{
		digit = b[strlen] - '0';
		if (digit != 0 && digit != 1)
		{
			return (0);
		}
		else
		{
			power = 1;
			for (i = 0; i < idx; i++)
			{
				power *= 2;
			}
			decimal = decimal + (power * digit);
		}
		idx++;
	}
	return (decimal);
}
