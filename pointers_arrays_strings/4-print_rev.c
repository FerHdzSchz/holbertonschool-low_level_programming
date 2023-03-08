#include "main.h"
/**
 *
 *
 */

void print_rev(char *s)
{
	int j;
	int len_str;

	len_str = 0;
	while (*(s + len_str) != '\0')
	{
		len_str += 1;
	}

	for (j = len_str - 1; j == 0; j--)
	{
		_putchar(s[j]);
	}
		_putchar('\n');
}
