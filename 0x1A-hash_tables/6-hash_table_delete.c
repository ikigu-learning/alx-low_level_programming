#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 *
 * Return: Nothing
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr;

	unsigned long int i = 0;

	if (!ht)
		return;

	while (i < ht->size)
	{
		ptr = ht->array[i];

		while (ptr)
		{

			free(ptr->key);
			free(ptr->value);
			free(ptr);

			ptr = ptr->next;
		}

		i++;
	}

	free(ht->array);
	free(ht);
}
