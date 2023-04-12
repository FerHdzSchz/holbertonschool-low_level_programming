#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Add node to the end of linked list
 * @head: head of linked list
 * @str: string to add
 * Return: updated list
*/

list_t *add_node_end(list_t **head, const char *str)
{
    char *aux_str;
    int str_len;
    list_t *new_node, *old_nodes;

    new_node = malloc(sizeof(list_t));

  	if (new_node == NULL)
	{
		return (NULL);
	}


	aux_str = strdup(str);
	str_len = 0;
	while (str[str_len] != '\0')
	{
		str_len++;
	}

    new_node->str = aux_str;
    new_node->len = str_len;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        old_nodes = *head;
        while (old_nodes->next != NULL)
        {
            old_nodes = old_nodes->next;
        }
        old_nodes->next = new_node;
    }
    return(*head);
}
