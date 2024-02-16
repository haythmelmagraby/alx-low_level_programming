#include "hash_tables.h"

/**
 *hash_table_get- retrieves a value associated with a key.
 *@ht: the hash table you want to look into.
 *@key: the key you are looking for.
 *Return: value associated, or NULL if key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *h_node;

	if (!ht || !key || !ht->array || ht->size == 0 || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);
	h_node = ht->array[index];

	while (h_node)
	{
		if (strcmp(h_node->key, key) == 0)
			return (h_node->value);
		h_node = h_node->next;
	}
	return (NULL);
}
