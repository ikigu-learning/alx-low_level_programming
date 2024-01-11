#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: head of the list
 * @index: index to retrieve
 *
 * Return: pointer to that node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int tracker = 0;
	dlistint_t *current = head;

	while (current)
	{
		if (tracker == index)
		{
			return (current);
		}

		tracker++;
		current = current->next;
	}

	return (NULL);
}
