#include "lists.h"
/**
 *sum_dlistint- sum linked list values
 *@head: the linked list header
 *
 *Return: sum of linked list or 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	while (head)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}
