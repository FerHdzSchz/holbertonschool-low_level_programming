#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Find function for last digit.
 *
 * Return: Always 0
 */

int main(void)
{
	int n;
	int r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	r = n % 10;

	if (r > 5)
	{
		printf("The las digit of %d is %d and is greater than 5\n", n, r);
	}
	else if (r == 0)
	{
		printf("The las digit of %d is %d and is 0\n", n, r);
	} else if (r < 0)
	{
		printf("The las digit of %d is %d and is less than 5\n", n, r);
	}

	return (0);
}