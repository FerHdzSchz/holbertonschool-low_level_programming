#include "main.h"

/**
* puts2 - prints every other character and finishes with a new line
*
* @str: string to reverse
*
*/

void puts2(char *str)
{
	int j;
	int len_str;

	len_str = 0;
	while (*(str + len_str) != '\0')
	{
		len_str += 1;
	}

	for (j = 0; j < len_str; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(s[i]);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
