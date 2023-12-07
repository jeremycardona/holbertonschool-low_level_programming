#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - get node n-th node of a doubly ll.
 * Description: function that returns the nth node of a dlistint_t
 * algorithm: initialize count = 0
 * looop throught the ll
 * Return: nth node of dll head->previous, if dne return null.
 * @head: dll address
 * @index: index node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (!head)
		return (NULL);
	while ((head->next))
	{
		if (count == index)
		{
			return (head);
		}
		head = head->next;
		count++;
	}
	return (NULL);
}
