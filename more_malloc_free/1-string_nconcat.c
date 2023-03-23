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
	char *array = NULL;
	unsigned int str1_len, str2_len;
	unsigned int i;

	str1_len = 0;
	str2_len = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[str1_len] != '\0')
		str1_len++;
	while (s2[str2_len] != '\0')
		str2_len++;

	if (n > str2_len)
		n = str2_len;

	array = malloc((sizeof(char) * (n + str1_len) + 1));
	if (array == NULL)
		return (0);
	for (i = 0; i < str1_len; i++)
		array[i] = s1[i];
	for (i = 0; i < n; i++)
		array[i + str1_len] = s2[i];

	array[str1_len + n] = '\0';
	/*printf("array last member is = %d\n", array[m_size]);*/
	return (array);
}
