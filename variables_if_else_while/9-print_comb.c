#include <stdio.h>
/**
 * main - function to print all hex characters
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		c = '0' + i;
		putchar(c);
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
