#include <stdio.h>
/**
 * main - Function that prints in new line every parameter
 *
 * @argc: Argument count
 * @argv: Argument list
 * Return: Always 0
 */
int main(int argc, char **argv)
{
int j;
for (j = 0; j < argc; j++)
{
printf("%s\n", argv[j]);
}
return (0);
}
