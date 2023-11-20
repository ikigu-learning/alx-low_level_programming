#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_node_end - adds new node at beginning of linked list
* @head: first node?
* @str: string to duplicate
*
* Return: pointer to new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	char *s;

	list_t *ptr = *head;
	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	s = strdup(str);

	if (!s)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = s;
	new_node->len = strlen(s);
	new_node->next = NULL;

	if (!(*head))
	{
		*head = new_node;
		return (new_node);
	}

	while (ptr->next)
	{
		ptr = ptr->next;
	}

	ptr->next = new_node;


	return (new_node);
}
