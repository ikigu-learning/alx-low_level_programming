#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node
 * of a dlistint_t list at a give position
 * @head: head of the list
 * @index: position at which to delete
 *
 * Return: 1 on success || 0 on failure
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int target = 0;
	dlistint_t *current = *head;

	while (current)
	{
		if (index == 0 && current->next == NULL)
		{
			free(current);
			*head = NULL;
			return (1);
		}

		if (index == 0)
		{
			current->next->prev = NULL;
			*head = current->next;
			free(current);
			return (1);
		}

		if (current->next == NULL && target == index)
		{
			current->prev->next = NULL;
			free(current);
			return (1);
		}

		if (target == index)
		{
			current->prev->next = current->next;
			current->next->prev = current->prev;
			free(current);
			return (1);
		}
		target++;
		current = current->next;
	}

	return (-1);
}
