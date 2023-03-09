#include "main.h"

/**
* rev_string - Reverse a string
*
* @s: string to reverse
*
*/

void rev_string(char *s)
{
	int j;
	int len_str;

	len_str = 0;
	while (*(s + len_str) != '\0')
	{
		len_str += 1;
	}
	for (j = 0; j < len_str / 2; j++)
	{
		char tmp = s[j];
		s[j] = s[len_str - j - 1];
		s[len_str - j - 1] = tmp;
	}

}