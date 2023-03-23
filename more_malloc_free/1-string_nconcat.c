#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *string_nconcat - Concatenates s1 and n chars of s2
 * @s1: first string to concat
 * @s2: second string to take n chars
 * @n: number of characters to copy
 * Return: pointer to concatenated string with s2 n chars
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *array;
	unsigned int str1_len, str2_len;
	unsigned int m_size;
	unsigned int i;

	str1_len = 0;
	str2_len = 0;

	if (s1 == NULL && s2 == NULL)
	{
		array = malloc(1);
		return (array);
	}
	while (*(s1 + str1_len) != '\0')
		str1_len++;
	while (*(s2 + str2_len) != '\0')
		str2_len++;
	if (n >= str2_len)
		n = str2_len;

	m_size = sizeof(char) * (n + str1_len) + 1;
	array = malloc(m_size);
	if (array == NULL)
		return (0);
	for (i = 0; i < (n + str1_len); i++)
	{
		if (i < str1_len)
			array[i] = s1[i];
		else
			array[i] = s2[i - str1_len];
	}
	array[i + 1] = '\0';
	return (array);
}
