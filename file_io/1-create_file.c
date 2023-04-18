#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * 
*/
int create_file(const char *filename, char *text_content)
{
	int fop, text_len;

	if (*(filename) == '\0')
	{
		return (-1);
	}

	text_len = 0;

	while (*(text_content + text_len) != '\0')
	{
		text_len++;
	}

	if (text_len == 0)
	{
		text_content = "";
	}

	fop = open(filename, O_CREAT | O_RDONLY | O_RDWR | O_TRUNC, 0600);
	if (fop == -1)
	{
		return (-1);
	}
	printf("%s\n", text_content );
	write(fop, text_content, text_len);
	return (1);

}
