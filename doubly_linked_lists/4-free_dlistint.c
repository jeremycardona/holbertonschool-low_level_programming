#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free memory allocated in head
 * Description: function that frees memory allocated for a dll
 * @head: list address
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	while (temp)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
