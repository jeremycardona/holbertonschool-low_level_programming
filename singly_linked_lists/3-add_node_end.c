#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - add a new node at the end of list
 * Description: function that adds a new node at
 * the end ofa list_t list
 * Return: address of new elem, or NULL if fails
 * @head: list head
 * @str: str to duplicate str
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_current;
	list_t *last_current;

	new_current = malloc(sizeof(list_t));
	if (!new_current)
	{
		free(new_current);
		return (NULL);
	}

	new_current->len = strlen(str);
	new_current->str = strdup(str);
	new_current->next = NULL;
	if (!*head)
	{
		*head = new_current;
		return (*head);
	}

	last_current = *head;
	while (last_current->next)
	{
		last_current = last_current->next;
	}
	last_current->next = new_current;
	return (new_current);
}
