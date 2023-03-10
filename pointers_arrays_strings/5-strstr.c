#include "main.h"
#include <stdio.h>
/**
 * *_strstr - locates substring in string
 *
 * @haystack: string to search in
 * @needle: substring
 *
 * Return: location to occurrence of substring elses NULL
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j, needle_len, counter;
	char *ptr = haystack;

	/* First find needle len*/
	i = 0;
	counter = 0;

	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (needle[j] == haystack[i])
			{
				if (j == 0)
				{
					ptr = &haystack[i];
				}
				counter++;
				break;
			}
			j++;
		}
		i++;
	}
	if (counter != j | counter == 0)
	{
		ptr = NULL;
	}
	return (ptr);
}
