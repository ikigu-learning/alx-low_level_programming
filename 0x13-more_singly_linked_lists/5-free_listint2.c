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
	/*store current mem address*/

	listint_t *ptr = *head;
	listint_t *ptr_cpy = NULL;

	while (ptr)
	{
		ptr_cpy = ptr;

		free(ptr);

		ptr = ptr_cpy->next;
	}

	*head = NULL;
}
