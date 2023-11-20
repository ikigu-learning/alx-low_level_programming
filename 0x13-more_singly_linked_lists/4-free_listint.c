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
	listint_t *ptr = head;

	while (ptr)
	{
		free(ptr);

		ptr = ptr->next;
	}
}
