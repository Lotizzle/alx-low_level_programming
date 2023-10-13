#include "hash_tables.h"

/**
 * hash_table_get - This function retrieves the value associated with
 * a key.
 * @ht: Pointer to the table.
 * @key: The key used to search for the value.
 *
 * Return: The value of the key or NULL if key can't be found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];

	if (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
	}

	return (NULL);

}
