#include <stdio.h>

/**
 * main - function to print digits [0-9]
 *
 * Return: Always 0
 */

int main(void)
{

	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
