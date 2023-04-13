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
	list_t *nw_node;

	if (head != NULL)
	{
		node = head;
		nw_node = head->next;
		while (nw_node != NULL)
		{
			free(node->str);
			free(node);
			node = nw_node;
			nw_node = nw_node->next;
		}
		free(node->str);
		free(node);
	}
}
