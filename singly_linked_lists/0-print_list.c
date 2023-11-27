#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - print a linked list.
 * Description: function that prints a linked list
 * Return: list size
 * @h: head
 */
size_t print_list(const list_t *h)
{
	size_t nodes_count = 0;
	const list_t *link;

	link = h;
	while (link)
	{
		if (!link->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", link->len, link->str);
		link = link->next;
		nodes_count++;
	}
	return (nodes_count);
}
