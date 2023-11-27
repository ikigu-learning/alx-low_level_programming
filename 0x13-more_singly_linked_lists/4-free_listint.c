#include <stdlib.h>
#include "lists.h"

/**
* free_listint - frees a listint_t list
* @head: the head node
*
* Return: Nothing
*/

void free_listint(listint_t *head)
{
	if (!head)
		return;

	free_listint(head->next);

	free(head);
}
