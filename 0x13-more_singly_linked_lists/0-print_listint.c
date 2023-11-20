#include <stdio.h>
#include "lists.h"

/**
* print_listint - prints all the elements of a list
* @h: head node of a list
*
* Return: the number of nodes in the list
*/

size_t print_listint(const listint_t *h)
{
	listint_t *ptr;
	int count;

	ptr = h;
	count = 0;

	while (ptr)
	{
		printf("%d", ptr->n);
		count++;
		ptr = ptr->next;
	}

	return (count);
}
