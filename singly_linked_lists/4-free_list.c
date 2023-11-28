#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free memory for list_t list
 * Description: free memory for list_t list
 * @head: list head address
 */
void free_list(list_t *head)
{
	list_t *new_list;

	while ((new_list = head))
	{
		head = head->next;
		free(new_list->str);
		free(new_list);
	}
}
