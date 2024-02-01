#include "hash_tables.h"

/**
 * hash_table_get - gets a value associcated to @key
 * @key: key in a hash table to get value for
 * @ht: the hash table
 *
 * Return: the pointer to the value
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ptr;

	unsigned long int index = key_index((unsigned char *)key, ht->size);
	char *value = NULL;

	if (!ht || !key)
		return (value);

	ptr = ht->array[index];

	while (ptr)
	{
		if (strcmp(key, ptr->key) == 0)
		{
			value = ptr->value;
			break;
		}

		ptr++;
	}

	return (value);
}
