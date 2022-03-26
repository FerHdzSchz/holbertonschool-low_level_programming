#include <stdio.h>

/**
 * main - function to print digits [0-9]
 * without using characters
 *
 * Return: Always 0
 */

int main(void)
{

	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
