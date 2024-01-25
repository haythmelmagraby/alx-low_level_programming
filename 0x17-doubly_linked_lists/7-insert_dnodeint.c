#include "lists.h"
/**
 *insert_dnodeint_at_index- insert node at index
 *@h: the linked list header
 *@idx: the index to insert after
 *@n: the value of node
 *
 *Return: the node if inserted or null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = *h, *temp;
	unsigned int i = 0;

	if (!h)
		return (NULL);
	while (node)
	{
		if (i == idx)
		{
			if (i == 0)
				return (add_dnodeint(h, n));
			else if (node->next == NULL)
				return (add_dnodeint_end(h, n));
			temp = malloc(sizeof(dlistint_t));
			if (!temp)
				return (NULL);
			temp->n = n;
			temp->next = node->next;
			temp->prev = node;
			node->next->prev = temp;
			node->next = temp;
			return (temp);
		}
		node = node->next;
		i++;
	}
	return (NULL);
}
