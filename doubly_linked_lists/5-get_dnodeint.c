#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_dnodeint_at_index - Get node at index
 * @head: pointer to head of dlinked list
 * @index: index of element to return
 * Return: 0 if error, else indexed node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n;
	dlistint_t *h = head;
	dlistint_t *idx_node;

	idx_node = malloc(sizeof(dlistint_t));

	if (h == NULL)
	{
		return (NULL);
	}
	n = 0;

	while (h != NULL)
	{
		n++;
		if (index == (n - 1))
		{
			idx_node = h;
			break;
		}
		h = h->next;
	}

	if (index < (n - 1))
	{
		idx_node = NULL;
	}
	return (idx_node);
}
