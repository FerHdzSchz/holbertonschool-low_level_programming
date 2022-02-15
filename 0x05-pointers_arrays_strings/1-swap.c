/**
 * swap_int - Function to swap values of two integers
 *
 * @a: First integer to swap
 * @b: Seconf integer to swap
 */

void swap_int(int *a, int *b)
{
int aux = *a;
*a = *b;
*b = aux;
}
