#include <stdio.h>

/**
 * main - function to print alphabet
 *
 * return: Always 0
 */

int main(void)
{

	char c;
	for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
	putchar('\n');
	return (0);
}