#include "lists.h"
/**
 *get_dnodeint_at_index- get node at index
 *@head: the linked list
 *@index: the position of required node
 *Return: node if found or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
		return (NULL);
}
