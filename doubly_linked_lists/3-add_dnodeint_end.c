#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds node to tail of double linked lists
 * @head: double pointer to head
 * @n: int value of new node
 * Return: Pointer to head of updated list
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	int aux_n = n;
	dlistint_t *new_node, *old_nodes;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->next = NULL;
	new_node->n = aux_n;

	if (*head == NULL)
	{
		new_node->prev = NULL;
	}
	else
	{
		old_nodes = *head;
		while (old_nodes->next != NULL)
		{
			old_nodes = old_nodes->next;
		}
	old_nodes->next = new_node;
	new_node->prev = old_nodes;
	}
	return (*head);
}
