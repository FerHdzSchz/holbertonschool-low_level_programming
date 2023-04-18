#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - Function that reads a text file and prints
 *                 it to the POSIX standard output.
 * @filename: string of file name
 * @letters: number of letters to read and print
 *
 * Return: 0 if file can't be read
 *         0 if filename NULL
 *         0 if write fails or write unexpected number of bytes
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num_bytes;
	int fop;
	char *arr_buff;

	if (*(filename) == '\0')
	{
		return (0);
	}
	arr_buff = malloc((sizeof(char) * letters) + 1);
	if (arr_buff == NULL)
	{
		free(arr_buff);
		return (0);
	}

	fop = open(filename, O_RDONLY);
	if (fop == -1)
	{
		free(arr_buff);
		return (0);
	}

	num_bytes = read(fop, arr_buff, letters);
	write(STDOUT_FILENO, arr_buff, num_bytes);
	free(arr_buff);
	close(fop);

	return (num_bytes);
}
