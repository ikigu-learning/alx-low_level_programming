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
	/* make copy of head is*/

	/* Change head to the next pointer */

	/* free copy of head */

	listint_t *ptr;

	while (head)
	{
		ptr = *head;
		head = (*head)->next;
		free(ptr);
	}

	*head = NULL;
}
