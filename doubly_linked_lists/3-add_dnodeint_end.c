#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add a new node at the end of doubly ll.
 * Description: function that will add a new node at the end of doubly ll and fill data.
 * 1. Create a new node (say new_node).
 * 2. Put the value in the new node.
 * 3. Make the next pointer of new_node as null.
 * 4. If the list is empty, make new_node as the head.
 * 5. Otherwise, travel to the end of the linked list.
 * 6. Now make the next pointer of last node point to new_node.
 * 7. Change the previous pointer of new_node to the last node of the list.
 * Return: address of the new elem. or null if failed.
 * @head: list of doubly linked lists
 * @n: dll data to put
 */
 dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *last;

	node = malloc(sizeof(dlistint_t));
	if (!node)
	{
		return (NULL);
	}

	node->n = n;
	node->next = NULL;
	last = *head;
	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
		return (*head);
	}
	while (last->next)
	{
		last = last->next;
	}
	last->next = node;
	node->prev = last;
	return (*head);
}
