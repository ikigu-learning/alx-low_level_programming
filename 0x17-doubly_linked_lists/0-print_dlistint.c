#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head node
 *
 * Return: the number of nodes in the list
*/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int number_of_nodes = 0;

	while (current)
	{
		printf("%d\n", current->n);

		number_of_nodes++;
		current = current->next;
	}

	return (number_of_nodes);
}
