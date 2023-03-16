#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *str_concat - concat s1 and s2
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to concat string
 */

char *str_concat(char *s1, char *s2)
{
	int str1_len, str2_len, i;
	char *array;

	str1_len = 0;
	str2_len = 0;

	while (*(s1 + str1_len) != '\0')
		str1_len++;
	while (*(s2 + str2_len) != '\0')
		str2_len++;

	array = malloc((sizeof(char) * (str1_len + str2_len)) + 1);
	if (array == NULL || ((s1 == NULL) && (s2 == NULL)))
	{
		return (0);
	}
	if (s1 == NULL)
	{
		return (s2);
	}
	else if (s2 == NULL)
	{
		return (s1);
	}
	else
	{
		for (i = 0; i < (str1_len + str2_len); i++)
		{
			if (i < str1_len)
			{
				array[i] = s1[i];
			}
			else
			{
				array[i] = s2[i - str1_len];
			}
		}
		array[i+1] = '\0';
	}
	return (array);
}
