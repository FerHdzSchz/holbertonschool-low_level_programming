#include <stdio.h>
#include <stdlib.h>
/**
 * main - function to multiply 2 args
 * @argc: Argument count
 * @argv: Argument list
 * Return: 0 if succes, if diff that 2 arguments are given print ERROR
 */


int main(int argc, char **argv)
{
int r, m1, m2;

if (argc == 3)
{
m1 = atoi(argv[1]);
m2 = atoi(argv[2]);
r = m1 *m2;
printf("%d\n", r);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
