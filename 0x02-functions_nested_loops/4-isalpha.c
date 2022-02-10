#include "main.h"

/**
 * _isalpha - Function that checks for alphabetic character.
 *
 * @c: Letter to be checked
 *
 * Return: 1 if c is lowercase or uppercase, 0 otherwise.
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z')|| (c >= 'A' && c <= 'Z'))
{
return (1);
}
return (0);
}
