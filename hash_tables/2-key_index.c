#include "hash_tables.h"

/**
 * key_index - function to find the index of the key
 * @key: pointer to string key
 * @size: size of the array
 * Return: index of key
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;
	idx = hash_djb2(key) % size;
	return (idx);
}
