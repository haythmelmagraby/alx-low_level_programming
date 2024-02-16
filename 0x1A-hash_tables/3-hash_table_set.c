#include "hash_tables.h"

/**
 *hash_table_set- adds an element to the hash table.
 *@key: the key.
 *@value: the value associated with the key.
 *
 *Return: 1 if it succeeded, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *h_node;
	hash_node_t *temp;
	unsigned long int index;
	char *str;

	if (!ht || !key || !value || ht->array == 0
			|| ht->size == 0 || strlen(key) == 0)
		return (0);
	index = key_index((const unsigned char *) key, ht->size);
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			str = strdup(value);
			if (!str)
				return (0);
			free(temp->value);
			temp->value = str;
			return (1);
		}
		temp = temp->next;
	}
	h_node = malloc(sizeof(hash_node_t));
	if (!h_node)
		return (0);
	h_node->key = strdup(key);
	h_node->value = strdup(value);
	if (!h_node->key || !h_node->value)
	{
		if (!h_node->value)
			free(h_node->key);
		free(h_node);
		return (0);
	}
	h_node->next = ht->array[index];
	ht->array[index] = h_node;
	return (1);
}
