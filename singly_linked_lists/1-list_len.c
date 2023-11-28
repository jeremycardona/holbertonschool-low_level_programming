#include "lists.h"
/**
 * list_len - number of elements in a linkied list
 * Description: function that gives the number of elemnt
 * in a linked list
 * Return: num elem
 * @h: list head
 */
size_t list_len(const list_t *h)
{
	size_t elem_count = 1;
	const list_t *list;

	list = h;
	if (!list)
		return (elem_count);
	while (list->next)
	{
		elem_count++;
		list = list->next;
	}
	return (elem_count);
}
