#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - function to add node at the beginnnig of list
 * @head: head elemet of list
 * @str: string in element to add
 * Return: updated list
*/
list_t *add_node(list_t **head, const char *str)
{
	char *str_aux;
	int str_len;
	list_t *node = malloc(sizeof(list_t));

	if (node == NULL)
	{
		return (NULL);
	}

	str_aux = strdup(str);
	str_len = 0;
	while (str[str_len] != '\0')
	{
		str_len++;
	}
	node->str = str_aux;
	node->len = str_len;
	node->next = *head;
	*head = node;
	return (*head);
}
