#include "main.h"

/**
 * _memcpy - Function to copy n memory block from src to dest
 *
 * @dest: destination
 * @src: source
 * @n: n items to copy
 *
 * Return: destination with copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i <= n; i++)
{
dest[i] = src[i];
}

return (dest);
}
