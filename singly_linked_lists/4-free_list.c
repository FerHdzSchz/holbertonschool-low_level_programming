#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_list - function to free a linked list
 * @head: linked list
*/

void free_list(list_t *head)
{
	list_t *node;
	node = malloc(sizeof(list_t));

	while (head)
	{
		node = head->next;
		free(head->str);
		head = node;
	}
	free(node);
}
