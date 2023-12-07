#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint - sum all the data
 * Description: function that returs the sum ofall the data
 * Return: sum of all data in dll
 * @head: dll
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);
	while ((head->next))
	{
		sum += (head->n);
		head = head->next;
	}
	sum += head->n;
	return (sum);
}
