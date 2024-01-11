#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head node of the dlistint_t list
 *
 * Return: Nothing
*/

void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;

	free_dlistint(head->next);
	free(head);
}
