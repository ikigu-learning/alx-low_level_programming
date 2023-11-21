#include "lists.h"

/**
 * sum_listint - gets sum of all data of listint_t list
 * @head: the head node
 *
 * Return: The sum of all data of a listint_t list
*/

int sum_listint(listint_t *head)
{
	const listint_t *ptr;
	int sum;

	ptr = head;
	sum = 0;

	if (ptr)
	{
		while (ptr)
		{
			sum += ptr->n;
			ptr = ptr->next;
		}

		return (sum);
	}

	return (0);
}
