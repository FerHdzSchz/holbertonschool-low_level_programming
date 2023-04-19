#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - Append text to file
 * @filename: path of the file to make the append
 * @text_content: text to append
 * Return:  1 - Success
 *         -1 - Fail
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fop, text_len;

	if (*(filename) == '\0')
	{
		return (-1);
	}

	if (filename == NULL)
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

	fop = open(filename, O_RDWR | O_APPEND, 600);
	if (fop == -1)
	{
		return (-1);
	}

	write(fop, text_content, text_len);
	close(fop);
	return (1);
}
