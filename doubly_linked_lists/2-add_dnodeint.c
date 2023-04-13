#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_dnodeint - Add node to beginning of list
 * @head: double pointer to head
 * @n: value to add in element
 * Return: updated double linked list
*/


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	int aux_n = n;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = aux_n;
	new_node->next = *head;
	new_node->prev = NULL;

	*head = new_node;

	return (*head);
}
