#include "main.h"

/**
 * print_line - Print a line with of len n
 *
 * @n: len of line
 *
 */

void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
}
_putchar('\n');
}
