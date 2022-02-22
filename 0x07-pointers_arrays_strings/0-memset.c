/**
 * _memset - Function to fill first n bytes with b
 *
 * @s: character pointer
 * @b: constant byte
 * @n: number of bytes to fill
 *
 * Return: s with changes
 */

char *_memset(char *s, char b, unsigned int n)
{
int i;
int m;
m = n;

for (i = 0; i <= m; i++)
{
s[i] = b;
}

return (s);
}
