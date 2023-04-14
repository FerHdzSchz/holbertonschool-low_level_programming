#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * dlistint_len - Count n of elements of double linked list
 * @h: pointer to head of dlinked list
 * Return: number of elements in list
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
		if (index == (n-1))
		{
			idx_node = h;
			break;
		}
		h = h->next;
		n++;
	}

	if (index < (n -1))
	{
		return (NULL);
	}
	return (idx_node);
}
