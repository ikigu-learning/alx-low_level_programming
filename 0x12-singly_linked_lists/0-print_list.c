#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* print_list - prints all the elements of a list
* @h: head node of the list
*
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	const list_t *ptr = NULL;

	ptr = h;

	while (ptr)
	{
		count++;

		if (!ptr->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", ptr->len, ptr->str);
		}

		ptr = ptr->next;
	}

	return (count);

}
