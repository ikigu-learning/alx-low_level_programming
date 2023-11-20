#include "lists.h"

/**
* pop_listint - deletes head node of a listint_t list
* @head: the head node
*
* Return: head node's data, or 0 if list is empty
*
*/

int pop_listint(listint_t **head)
{
	listint_t *copy_of_head;
	int head_data;

	if (!(*head))
		return (0);

	copy_of_head = (*head)->next;
	head_data = (*head)->n;

	*head = copy_of_head;

	return (head_data);
}
