#include <stdio.h>

/**
 * main - function to print alphabet
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	char c;

	for (i = 0; i < 16; i++)
		{
		if (i < 10)
		{
			c = '0' + i;
			putchar(c);
		}
		else
		{
			c = 'a' + (i - 10);
			putchar(c);
		}
	}
	return(0);
}
