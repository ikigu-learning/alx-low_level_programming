#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table to print
 *
 * Return: nothing
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr;

	unsigned long int i = 0;
	int printed = 0;

	if (!ht)
	{
		printf("{}\n");
		return;
	}

	putchar('{');

	while (i < ht->size)
	{
		ptr = ht->array[i];

		while (ptr)
		{
			if (printed == 1)
				printf(", ");

			printf("'%s': '", ht->array[i]->key);

			if (ht->array[i]->value && *(ht->array[i]->value) != '\0')
				printf("%s", ht->array[i]->value);

			printf("'");

			printed = 1;
			ptr = ptr->next;
		}

		i++;
	}

	printf("}\n");
}
