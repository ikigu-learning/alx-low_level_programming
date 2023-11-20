#include <stdlib.h>
#include "lists.h"

/**
* free_listint2 - frees a listint_t list
* @head: the head node
*
* Return: Nothing
*
* Description: This function also sets the head to NULL
*/

void free_listint2(listint_t **head)
{
	if (!(*head))
	{
		*head = NULL;
		return;
	}

	free_listint((*head)->next);

	free(*head);
}
