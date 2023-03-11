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
	int str_len, ndl_len, i, j, counter, loc;
	char *ptr = haystack;

	i = 0;
	loc = 0;
	ndl_len = 0;
	str_len = 0;
	counter = 0;
	while (needle[ndl_len] != '\0')
	{
		ndl_len++;
	}
	while (haystack[str_len] != '\0')
	{
		str_len++;
	}
	for (i = 0; i < str_len - ndl_len + 1; i++)
	{
		for (j = 0; j < ndl_len; j++)
		{
			if (haystack[i] == needle[j])
			{
				counter += 1;
				if (j == 0)
				{
					loc = i;
				}
			if (counter == ndl_len)
			{
				ptr = &haystack[loc];
				break;
			}
			}
		}
	}
	if (ndl_len != counter)
	{
		return (NULL);
	}
	return (ptr);
}
