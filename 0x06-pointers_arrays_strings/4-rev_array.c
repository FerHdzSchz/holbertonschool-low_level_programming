#include "main.h"
/**
 * reverse_array - Reverse array of integers
 *
 * @a: array of ints
 * @n: length of array
 *
 * Return: reverse array
 */
void reverse_array(int *a, int n)
{

int elem;
int rev_arr_elem;

for (elem = 0; elem < n--; elem++)
{
rev_arr_elem = a[elem];
a[elem] = a[n];
a[n] = rev_arr_elem;
}
}
