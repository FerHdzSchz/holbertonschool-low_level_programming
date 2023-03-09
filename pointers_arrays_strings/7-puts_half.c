#include "main.h"

/**
 * puts_half - Print just half of the string
 *
 * @str: String to evaluate
 *
*/

void puts_half(char *str)
{
	int str_len;
	int j;
	int n;

	str_len = 0;
	while (*(str + str_len) != '\0')
	{
		str_len += 1;
	}

	if (str_len % 2 != 0)
	{
		n = (str_len + 1) / 2;
	}
	else
	{
		n = str_len / 2;
	}

	for (j = n; j < str_len; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');

}
