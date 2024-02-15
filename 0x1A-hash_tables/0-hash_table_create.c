#include "hash_tables.h"
/**hash_table_create- function that creates a hash table.
 * @size: the size of the array.
 *
 *Return: a pointer to the newly created hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int counter;

	ht = malloc(sizeof(hash_table_t));
	if(!ht)
		return(NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);

	if(!(ht->array))
	{
		free(ht);
		return (NULL);
	}
	while(counter < size)
	{
		ht->array = NULL;
		counter++;
	}
	return (ht);
}
