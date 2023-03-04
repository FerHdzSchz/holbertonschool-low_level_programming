#include "main.h"
/**
 * _puts - Print a string ending in a new line
 * @str: String to evaluate
 *
 */

void _puts(char *str)
{
int len_str = 0;
while (*(str + len_str) != '\0')
{
_putchar(str[len_str]);
len_str += 1;
}
_putchar('\n');
}
