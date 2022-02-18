#include "main.h"

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
