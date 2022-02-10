#include "main.h"

/**
 * print_last_digit - Function to print las digit of a number
 *
 * @n: Number to find the last digit
 *
 * Return: Last digit of a number
 */

int print_last_digit(int n)
{
int l_dig = n % 10;
if (l_dig < 0)
{
l_dig *= -1;
}
_putchar(l_dig);
return (l_dig);
}
