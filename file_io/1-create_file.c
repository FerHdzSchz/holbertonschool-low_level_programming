#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - creates a file and writes content
 *  @filename: file name to create
 * @text_content: content to insert to file
 * Return: 1 if success or -1 if fail
*/
int create_file(const char *filename, char *text_content)
{
	int fop, text_len;

	if (*(filename) == '\0')
	{
		return (-1);
	}

	text_len = 0;

	if (text_content == NULL)
	{
		text_content = "";
	}

	while (*(text_content + text_len) != '\0')
	{
		text_len++;
	}

	fop = open(filename, O_CREAT | O_RDONLY | O_WRONLY | O_TRUNC, 0600);
	if (fop == -1)
	{
		return (-1);
	}
	write(fop, text_content, text_len);
	return (1);
}
