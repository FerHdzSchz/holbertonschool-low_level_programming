#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - function that searches a string for any of a set of bytes.
 *
 * @s: string array to evaluate
 * @accept: characters to look for
 * Return: a pointer to the byte of s first appearancea pointer
 * to the byte in s that matches one of the bytes in accept, or
 * NULL if no such byte is found
*/


char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j, counter, loc, aux;
	char *ptr = s;

	i = 0;
	loc = 0;
	aux = 0;
	counter = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				aux = i;
				if (aux < loc && counter > 0)
				{
					loc = aux;
				}
				else if (counter == 0)
				{
					loc = i;
					counter++;
				}
				break;
			}
			j++;
		}
		i++;
	}
	if (counter != 0)
	{
		ptr = &s[loc];
		return (ptr);
	}
	else
	{
		ptr = NULL;
		return(ptr);
	}
}
