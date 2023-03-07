#include "main.h"
/**
 * _strncat - Concat 2 words with truncated 1st word
 *
 * @dest: 2nd word
 * @src: 1st word
 * @n: number of chars from 1st word
 *
 * Return: cocatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
int str1_len, str2_len;

str2_len = 0;
while (dest[str2_len] != '\0')
{
str2_len++;
}

str1_len = 0;
while (src[str1_len] != '\0' && str1_len < n)
{
dest[str2_len] = src[str1_len];
str1_len++;
str2_len++;
}

dest[str2_len] = '\0';
return (dest);
}
