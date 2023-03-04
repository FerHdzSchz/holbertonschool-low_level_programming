#include "main.h"
/**
 * _isupper -  Function to detect if a character is
 *
 * @c: Character to evaluate
 *
 * Return: 1 if it is uppercase 0 otherwise
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
