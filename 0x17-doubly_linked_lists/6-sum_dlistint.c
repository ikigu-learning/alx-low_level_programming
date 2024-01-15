#include "lists.h"

/**
 * sum_dlistint - returns sum of all data of a dlistint_t list
 * @head: head of the list
 *
 * Return: the sum or 0 if list is empty
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
