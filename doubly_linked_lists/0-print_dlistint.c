#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dlistint - print all the element of a dlist
 * Description: function that prints all the elem
 * of a double linked list
 * Return: a number of nodes
 * @h: hea node of dll
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current_node;
	size_t node_count = 0;

	if (!h)
		return (node_count);

	current_node = h;
	if (!(current_node->prev) && !(current_node->next))
	{
		printf("%d\n", current_node->n);
		node_count++;
		return (node_count);
	}
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
