#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Function to find if rand number is positive, negative or zero.
 *
 * Return: Always 0
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf(" %d is positive", n);
	} else if (n == 0)
	{
		printf(" %d is zero", n);
	} else if (n < 0)
	{
		printf(" %d is negative", n);
	}
	return (0);
}
