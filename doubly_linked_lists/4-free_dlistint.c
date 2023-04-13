#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dlistint - Free memory of double linked list
 * @head: pointer to head
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node;

	if (head == NULL)
	{
		return;
	}
	current_node = head;
	while (current_node)
	{
		if (current_node->next == NULL)
		{
			break;
		}
		else
		{
			current_node = current_node->next;
			free(current_node->prev);
		}
	}
	free(current_node);
}
