#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: head of the dlistint_t list
 * @n: the data for the new node
 *
 * Return: address of the new element or NULL if it fails
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *first_node, *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	if (*head != NULL)
	{
		first_node = *head;
		*head = new_node;
		first_node->prev = new_node;
		new_node->next = first_node;
	}
	else
	{
		*head = new_node;
		new_node->next = NULL;
		new_node->prev = NULL;
	}

	new_node->n = n;

	return (*head);
}
