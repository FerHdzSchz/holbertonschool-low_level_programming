#include "main.h"
/**
 * _strlen - Function that returns length of a string
 *
 * @s: string to evaluate
 *
 * Return: length of string to evaluate
 */

int _strlen(char *s)
{
const char *str;
for (str = s; *str; ++str)
;
return(str - str);
}
