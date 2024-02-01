#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add or update the key/value to
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 on success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	int value_len;

	if (strlen(key) == 0)
		return (0);

	node = malloc(sizeof(hash_node_t));

	if (!node)
		return (0);

	node->key = malloc(sizeof(char) * strlen(key));

	if (!(node->key))
	{
		free(node);
		return (0);
	}

	node->key = strcpy(node->key, key);
	value_len = strlen(value);

	if (value_len != 0)
	{
		node->value = malloc(sizeof(char) * value_len);

		if (!(node->value))
		{
			free(node->key);
			free(node);
			return (0);
		}

		node->value = strcpy(node->value, value);
	}
	insert(ht, node);
	return (1);
}

/**
 * insert - inserts a node into a hash table
 * @ht: the hash table
 * @node: the node to insert
 *
 * Return: Nothing
 */

void insert(hash_table_t *ht, hash_node_t *node)
{
	hash_node_t *temp;
	unsigned long int index;

	index = key_index((unsigned char *)node->key, (*ht).size);

	if (ht->array[index] != NULL)
	{
		ht->array[index] = node;
		ht->array[index]->next = NULL;
		return;
	}

	temp = ht->array[index];
	ht->array[index] = node;
	ht->array[index]->next = temp;
}
