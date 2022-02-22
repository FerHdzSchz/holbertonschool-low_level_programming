#include "main.h"
/**
 * _strspn - length of a prefix substring
 * @s: string
 * @accept: contains bytes of prefix
 *
 * Return: length of prefix
 */

unsigned int _strspn(char *s, char *accept)
{
int i, j;
unsigned int len;

len = 0;
i = 0;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0' && s[i + 1] >= 'a' && s[i + 1] <= 'z')
{
if (accept[j] == s[i])
{
len++;
break;
}
j++;
}
i++;
}
return (len - 1);
}
