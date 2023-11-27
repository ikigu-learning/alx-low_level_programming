#include "lists.h"
#include <stdlib.h>

/**
* add_nodeint - adds new node at beginning of listint_t list
* @head: head node of the list
* @n: the integer to add
*
* Return: the address of the new element
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (!temp)
		return (NULL);

	temp->next = *head;
	*head = temp;
	(*head)->n = n;

	return (*head);
}
