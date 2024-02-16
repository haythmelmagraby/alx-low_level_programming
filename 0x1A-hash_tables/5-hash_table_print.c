#include "hash_tables.h"
/**
 *hash_table_print-  prints a hash table.
 *@ht: the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *h_node;
	int f = 0;

	if (!ht || !ht->array)
		return;
	printf("{");

	while (i < ht->size)
	{
		i++;
		h_node = ht->array[i];

		while (h_node)
		{
			if (f == 1)
				printf(", ");
			f = 1;
			printf("'%s': '%s'", h_node->key, h_node->key);
			h_node = h_node->next;
		}
	}
	printf("}\n");
}
