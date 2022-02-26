#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * is_int - Function to check if a string is an int
 * @tmp: String to check
 *
 * Return: Print the addition, if no number passed print 0.
 */

int is_int(char *tmp)
{
	int i, num, len;

	i = 0;
	num = 0;
	len = strlen(tmp);
	while (i < len)
	{
		if (tmp[i] < '0' || tmp[i] > '9')
		{
			return (-1);
		}
		else
			num = num * 10 + (tmp[i] - '0');
		i++;
	}
	return (num);
}

/**
 * main - Function to add two integers
 * @argc: Count of arguments
 * @argv: List of arguments
 *
 * Return: Print the addition, if no number passed print 0. If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1
 */
int main(int argc, char **argv)
{
	int i, num, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		num = is_int(argv[i]);
		if (num == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}

