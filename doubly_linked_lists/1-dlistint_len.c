#include "lists.h"
#include <stdlib.h>
/**
 * dlistint_len - length of a doubly linked list
 * Description: function that counts elements in dll
 * Return: length
 * @h: doubly list head address
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
