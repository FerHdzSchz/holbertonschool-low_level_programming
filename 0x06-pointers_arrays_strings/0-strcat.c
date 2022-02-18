#include "main.h"

/**
 * _strcat - Concatenate strings
 * @dest: string appended to
 * @src: string to append
 *
 * Return: Appended string
 */

char *_strcat(char *dest, char *src)
{
int str_len, j;

str_len = 0;
while (dest[str_len] != '\0')
{
str_len++;
}

j = 0;
while (src[j] != '\0')
{
dest[str_len] = src[j];
str_len++;
j++;
}
dest[str_len] = '\0';
return (dest);

}
