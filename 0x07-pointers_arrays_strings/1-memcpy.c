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
int i = 0;
int j = 0;

while (n > 0)
{
dest[i] = src[j];
i++;
j++;
n--;
}
return (dest);
}
