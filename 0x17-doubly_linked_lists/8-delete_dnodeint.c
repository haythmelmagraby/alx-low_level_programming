#include "lists.h"
/**
 *delete_dnodeint_at_index- delete node at index
 *@head: the list head
 *@index: the index to delete node
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;
	unsigned int i = 0;

	if (!*head)
		return (-1);
	while (node)
	{
		if (i == index)
		{
			if(node->prev == NULL)
			{
				if(node->next != NULL)
				{
					node->next->prev = NULL;
					return (1);
				}
					free_dlistint(node);
					return (1);
			}
			if (node->next == NULL)
			{
				node->prev->next = NULL;
				free_dlistint(node);
				return (1);
			}
			printf("hi\n");
			node->prev->next = node->next;
			free_dlistint(node);
			return (1);
		}
		node = node->next;
		i++;
	}
	return (-1);
}
