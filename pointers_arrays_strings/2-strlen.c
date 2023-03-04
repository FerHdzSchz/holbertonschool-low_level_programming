#include "main.h"
/**
 * _strlen - Function that returns length of a string
 *
 * @s: string to evaluate
 *
 * Return: length of string to evaluate
 */

int _strlen(char *s)
{
	int s_len = 0;

	while (*s != '\0')
	{
		s++;
		s_len++;
	}
	return (s_len);
}
