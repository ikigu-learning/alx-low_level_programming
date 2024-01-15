#include "lists.h"

/**
 * dlistint_len - calculates number of elements in a dlistint_t list
 * @h: head of the list
 *
 * Return: number of elements in the list
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;
	const dlistint_t *current = h;

	while (current)
	{
		length++;
		current = current->next;
	}

	return (length);
}
