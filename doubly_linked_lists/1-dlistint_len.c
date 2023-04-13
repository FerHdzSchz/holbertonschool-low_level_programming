#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * dlistint_len - Count n of elements of double linked list
 * @h: pointer to head of dlinked list
 * Return: number of elements in list
*/


size_t dlistint_len(const dlistint_t *h)
{
	int n;
	const dlistint_t head = h;

	n = 0;
	while (head != NULL)
	{
		head = head->next;
		n++;
	}
	return (n);
}
