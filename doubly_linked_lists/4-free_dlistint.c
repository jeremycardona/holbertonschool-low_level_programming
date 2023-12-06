#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free memory allocated in head
 * Description: function that frees memory allocated for a dll
 * @head: list address
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		free(head->prev);
		free(head->next);
		while (head->next)
		{
			free(head->prev);
		}
		free(head->next);
		free(head);

	}
}
