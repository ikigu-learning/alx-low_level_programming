#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at given position
 * @h: head of the list
 * @idx: index to add node at
 * @n: the data to add to the new node
 *
 * Return: address of the new node || NULL if something fails
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	unsigned int target = 0;
	dlistint_t *current = *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	while (current || idx == 0)
	{
		if (idx == 0)
		{
			free(new_node);
			new_node = add_dnodeint(h, n);
			return (new_node);
		}

		if (current->next == NULL && target + 1 == idx)
		{
			free(new_node);
			new_node = add_dnodeint_end(h, n);
			return (new_node);
		}

		if (idx == target)
		{
			current->prev->next = new_node;
			new_node->next = current;
			current->prev = new_node;
			new_node->n = n;
			return (new_node);
		}

		target++;
		current = current->next;
	}

	return (NULL);
}
