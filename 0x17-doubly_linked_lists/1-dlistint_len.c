#include "lists.h"

/**
 *dlistint_len- cal the length of double linked list
 *@h: the double linked list header
 *
 *Return: the length of linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	while (h)
	{
		h = h->next;
		size++;
	}
	return (size);
}
