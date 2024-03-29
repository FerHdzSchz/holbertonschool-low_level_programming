#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get - Get value of node by key
 * @ht: A pointer to hash table.
 * @key: The key search.
 *
 * Return: NULL if error
 *         else the value of the array with the key.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
