#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_listint - reverses a list
 * @head: address of head
 *
 * Return: pointer to first node of reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous_node, *current_next;

	current_next = (*head)->next;
	previous_node = *head;
	(*head)->next = NULL;
	*head = current_next;

	while ((*head)->next)
	{
		current_next = (*head)->next;
		(*head)->next = previous_node;
		previous_node = *head;
		*head = current_next;
	}

	(*head)->next = previous_node;


	return (*head);
}
