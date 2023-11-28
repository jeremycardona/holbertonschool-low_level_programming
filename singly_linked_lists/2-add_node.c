#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - add a new node at the beginning of a list
 * Description: function that adds a new node
 * at the beggining of a lsits_t list
 * Return: new node address, or null if fails
 * @head: list of lists_t list
 * @str: string to add to node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *sll;

	sll = malloc(sizeof(list_t));
	sll->next = *head;
	if (!sll)
	{
		free(sll);
		return (NULL);
	}
	sll->str = strdup(str);
	sll->len = strlen(str);
	*head = sll;
	return (sll);
}
