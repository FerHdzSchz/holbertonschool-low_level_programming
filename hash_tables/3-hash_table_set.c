#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_set - Create and set new node for hash table
 * @ht: hash table to create new nodes
 * @key: key of value for new node
 * @value: value of the node
 * Return: 1 if it succeeded, 0 otherwise
*/


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long idx;
	int i;
	hash_node_t *new_node;
	hash_node_t *aux_node;

	if (ht == NULL | *(key) == '\0')
	{
		return (0);
	}

	idx = key_idx(key, ht->size);
	aux_node = ht->array[idx]; /*Save array[idx] for collision handling*/


	if (ht->array[idx] == NULL)
	{
		new_node = malloc(sizeof(hash_node_t *));
		if (new_node == NULL)
		{
			return (0);
		}
		new_node->key = idx;
		new_node->value = value;
		new_node->next = NULL;
		ht->array[idx] = new_node;
		return(1);
	}
	else
	{
		aux_node = ht->array[idx];
		if (strcmp(aux_node->key, key) == 0)
		{
			new_node->next = aux_node->next;
			ht->array[idx] = new_node;
			free_node(aux_node);
			return (1);
		}
		while (aux_node->next != NULL && strcmp(aux_node->next->key, key) != 0)
		{
			aux_node = aux_node->next;
		}
			if (strcmp(aux_node->key, key) == 0)
		{
			new_node->next = aux_node->next->next;
			free_node(aux_node->next);
			aux_node->next = new_node;
		}
		else
		{
			new_node->next = ht->array[idx];
			ht->array[idx] = new_node;
		}
	}
   return (1);
}
