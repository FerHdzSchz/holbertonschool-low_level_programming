#include "main.h"
#include <stdlib.h>

/**
* *_strdup - returns pinter to duplicated string
* @str: input string to be duplicated
* Return: pointer to duplicated string
*/

char *_strdup(char *str)
{
	int str_len;
	int i;
	char *array;

	str_len = 0;

	if (*str == '\0')
	{
		return (0);
	}

	while (*(str + str_len) != '\0')
	{
		str_len++;
	}

	if (str_len >= 0)
	{
		array = malloc(sizeof(char) * str_len+1);
		if (array == NULL)
		{
			return (0);
		}
		for (i = 0; i < str_len+1; i++)
		{
			array[i] = str[i];
		}
	}

	return (array);

}
