#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the head node
 * @idx: index of the list where to insert new node
 * @n: the data to add to the new node
 *
 * Return: Index of the new node, NULL if failure
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *copy_of_prv_node, *new_node;
	unsigned int index;

	ptr = *head;
	new_node = malloc(sizeof(listint_t));
	index = 0;

	if (!new_node)
		return (NULL);

	while (ptr)
	{
		if (index == (idx - 1))
		{
			copy_of_prv_node = ptr->next;
			ptr->next = new_node;
			new_node->n = n;
			new_node->next = copy_of_prv_node;

			return (new_node);
		}

		index++;
		ptr = ptr->next;
	}

	free(new_node);
	return (NULL);
}
