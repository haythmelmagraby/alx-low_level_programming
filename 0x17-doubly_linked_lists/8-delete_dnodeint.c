#include "lists.h"
/**
 *delete_dnodeint_at_index- delete node at index
 *@head: the list head
 *@index: the index to delete node
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;

	if (!*head)
		return (-1);
	while (index != 0)
	{
		if (!node)
			return (-1);
		node = node->next;
		index--;
	}
	if (node == *head)
	{
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		node->prev->next = node->next;
		if (node->next != NULL)
			node->next->prev = node->prev;
	}
	free(node);
	return (1);
}
