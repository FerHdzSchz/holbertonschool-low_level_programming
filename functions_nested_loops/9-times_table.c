#include "main.h"
#include <stdio.h>
/**
 * times_table - Prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int i;
	int j;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ('0' + (i * j) <= '9')
			{
				c = '0' + (i * j);
				_putchar(c);
				if (j < 9)
				{
					_putchar(',')
					if ((i * (j + 1)) < 10)
					{
						_putchar(' ');
						_putchar(' ');
					}
					else
					{
						_putchar(' ');
					}
				}
			}
			else
			{
				_putchar('0' + (i * j) / 10);
				_putchar('0' + (i * j) % 10);
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
