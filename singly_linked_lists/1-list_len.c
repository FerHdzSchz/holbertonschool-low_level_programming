#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
* list_len - function print elemens of linked list and the number of nodes
* @h: pointer to list first element
* Return: number of nodes
*/

size_t list_len(const list_t *h)
{
	int count;
	const list_t *head = h;

	count = 0;
	while (head != NULL)
	{
		head = head->next;
		count++;
	}
	return (count);
}
