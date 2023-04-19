#include "main.h"
#include <stdio.h>

/**
 * main - Function to copy file 1 to file 2
 * @ac: number of parameters
 * @av: optional arguments
 * Return: 0 if correct else print error statements
*/
int main(int ac, char **av)
{
	char char_buff[1024];
	ssize_t chars2read, chars2write;
	int fop, fcp, fclose;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to\n");
		return (97);
	}
	fop = open(av[1], O_RDONLY);
	fcp = open(av[2], O_CREAT | O_RDWR | O_APPEND | O_TRUNC, 0664);
	chars2read = 1024;
	while (chars2read == 1024)
	{
		chars2read = read(fop, char_buff, chars2read);
		if (chars2read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			return (98);
		}
		chars2write = write(fcp, char_buff, chars2read);
		if (chars2write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			return (99);
		}
	}
	fclose = close(fop);
	if (fclose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fop);
		return (100);
	}
	fclose = close(fcp);
	if (fclose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fcp);
		return (100);
	}
	return (0);
}
