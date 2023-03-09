#include "main.h"
/**
 * _strchr - Find address of first occurance of character in string
 *
 * @s:string
 *
 * @c:character to look for
 * Return: Address of first occuranceof character
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
	{
		return (&s[i]);
	}
		i++;
	}

	if (c == '\0')
	{
		return (&s[i+1]);
	}
	return (0);
}
