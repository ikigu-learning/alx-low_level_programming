#include <stdlib.h>
#include "lists.h"

/**
* list_len - returns the number of elements in linked list
* @h: first node of linked list
*
* Return: number of elements
*/

size_t list_len(const list_t *h)
{
	const list_t *ptr = h;
	size_t count = 0;

	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
