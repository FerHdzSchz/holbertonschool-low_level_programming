#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints elements of double linked list
 * @h: pointer to head node of double linked list
 * Return: number of elements
*/

size_t print_dlistint(const dlistint_t *h)
{
	int n;
	const dlistint_t *head = h;

	n = 0;
	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		n++;
	}
	return (n);
}
