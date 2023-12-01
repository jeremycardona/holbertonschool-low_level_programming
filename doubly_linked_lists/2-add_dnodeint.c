#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - insert node to doubly ll
 * Description: insert node to head
 * The new node is always added before
 * the head of the given Linked List.
 * The task can be performed by using
 * the following 5 steps:
 * 1.) Firstly, allocate a new node (say new_node).
 * 2.) Now put the required data in the new node.
 * 3.) Make the next of new_node point to the
 * current head of the doubly linked list.
 * 4.) Make the previous of the current
 * head point to new_node.
 * 5.) Lastly, point head to new_node.
 * Return: node address
 * @head: list of nodes
 * @n: data to insert
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_head;

	new_head = malloc(sizeof(dlistint_t));
	if (!new_head)
	{
		free(new_head);
		return (NULL);
	}
	new_head->n = n;

	new_head->next = *head;
	new_head->prev = NULL;

	if (*head)
		(*head)->prev = new_head;
	*head = new_head;

	return (new_head);
}
