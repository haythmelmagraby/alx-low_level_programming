#include "lists.h"
/**
 *free_dlistint- free linked list
 *@head: linked list header
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *list = head, *new;

	if (head)
	{
		while (list)
		{
			new = list->next;
			free(list);
			list = new;
		}
	}
}
