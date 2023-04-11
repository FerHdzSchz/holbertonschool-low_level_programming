#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* print_list - function print elemens of linked list and the number of nodes
* @*h: pointer to list first element
* Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	int count;
	const list_t *head = h;

	count = 0;
	while (head != NULL)
	{
		if (head->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", head->len, head->str);
		}
		head = head->next;
		count++;
	}
	return (count);
}
