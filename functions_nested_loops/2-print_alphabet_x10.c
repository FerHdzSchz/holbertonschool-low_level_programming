#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
int i = 0;
char let;

for (i = 0; i < 10; i++)
{
for (let = 'a'; let <= 'z'; let++)
{
_putchar(let);
}
_putchar('\n');
}
}
