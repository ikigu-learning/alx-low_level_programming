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
	unsigned long int index;

	int value_len = 0;

	if (!key)
		return (0);

	node = malloc(sizeof(hash_node_t));

	if (!node)
		return (0);

	node->key = strdup(key);

	if (!(node->key))
	{
		free(node);
		return (0);
	}

	value_len = strlen(value);

	if (value && value_len != 0)
	{
		node->value = strdup(value);

		if (!(node->value))
		{
			free(node->key);
			free(node);
			return (0);
		}
	}

	index = key_index((unsigned char *)node->key, (*ht).size);
	insert(&(ht->array[index]), &node);
	return (1);
}

/**
 * insert - inserts a node into a hash table
 * @head_addr: the head ptr to where you're inserting
 * @node: the node to insert
 *
 * Return: Nothing
 */

void insert(hash_node_t **head_addr, hash_node_t **node)
{
	hash_node_t *temp, *head;

	head = *head_addr;

	if (head == NULL)
	{
		*head_addr = *node;
		(*node)->next = NULL;
		return;
	}

	temp = head;
	*head_addr = *node;
	(*node)->next = temp;
}
