#include "main.h"

/**
 * *_strcpy - Copies a string including buffer to dest
 *
 * @dest: Destination buffer
 * @src: Word to copy
 *
 * Return: Returns copied string
*/

char *_strcpy(char *dest, char *src)
{
	int str_len;
	int i;

	str_len = 0;


	while (*(src + str_len) != '\0')
	{
		str_len++;
	}

	for (i = 0; i <= str_len; i++)
	{
		dest[i] = src[i];
	}
	if (str_len != 0)
	{
		dest[i + 1] = src[i + 1];
	}
	return (dest);
}
