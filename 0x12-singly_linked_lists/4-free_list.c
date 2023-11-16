#include <stdlib.h>
#include "lists.h"

/**
* free_list - frees a list
* @head: first node
*
* Return: nothing
*/

void free_list(list_t *head)
{
	list_t *ptr = head;

	while (ptr)
	{
		free(ptr->str);
		free(ptr);

		ptr = ptr->next;
	}
}
