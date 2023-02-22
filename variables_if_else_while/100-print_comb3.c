#include <stdio.h>
/**
 * main - function to print all combinations 2 chars
 *
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	int j;
	int c1;
	int c2;

	for (i = 0; i < 10; i++)
	{
		c1 = '0' + i;
		for (j = 0; j < 10; j++)
		{
			if (j > i)
			{
				c2 = '0' + j;
				putchar(c1);
				putchar(c2);
				if (j < 10 && i < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
			else
			{
				continue;
			}
		}
	}
	putchar('\n');
	return (0);
}
