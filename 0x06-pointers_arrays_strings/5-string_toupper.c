#include "main.h"


/**
 * string_toupper - Change lowercase to uppercase in a string
 *
 * @c: string to modify
 *
 * Return: modified string
 */

char *string_toupper(char *c)
{
int i;
i = 0;
while (c[i] != '\0')
{
if (c[i] >= 'a' && c[i] <= 'z')
{
c[i] = c[i] - 32;
}
i++;
}
return (c);
}
