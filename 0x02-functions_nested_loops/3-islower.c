#include "main.h"
/**
 * _islower - Function that checks for lowercase character.
 *
 * @c: The character to test
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
return (0);
}
