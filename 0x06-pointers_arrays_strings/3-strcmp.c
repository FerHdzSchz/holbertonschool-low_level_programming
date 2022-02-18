#include "main.h"
/**
 * _strcmp - Compare two strings
 * @s1: string 1
 * @s2 : string 2
 * Return: 0 if the strings are the same, else print diff
 */

int _strcmp(char *s1, char *s2)
{
int char_count;
char_count = 0;

while (s1[char_count] != '\0' && s2[char_count] != '\0')
{
if (s1[char_count] != s2[char_count])
{
return (s1[char_count] - s2[char_count]);
}
char_count++;
}
return (0);
}
