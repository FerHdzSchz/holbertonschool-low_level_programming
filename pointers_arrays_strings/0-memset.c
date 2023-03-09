#include "main.h"
/**
 * _memset - Function to fill first n bytes with b
 *
 * @s: character pointer
 * @b: constant byte
 * @n: number of bytes to fill
 *
 * Return: s with changes
 */

char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;

    for (i = 0; i <= n; i++)
    {
        s[i] = b;
    }

    return (*s);
}
