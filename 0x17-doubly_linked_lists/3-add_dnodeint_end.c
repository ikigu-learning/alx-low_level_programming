#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to the head node
 * @n: the data of the new node
 *
 * Return: the address of the new element || NULL if something fails
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	if (!(*head))
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		while (current)
		{
			if (current->next == NULL)
			{
				current->next = new_node;
				new_node->prev = current;
				break;
			}

			current = current->next;
		}
	}

	new_node->next = NULL;
	new_node->n = n;
	return (new_node);
}
