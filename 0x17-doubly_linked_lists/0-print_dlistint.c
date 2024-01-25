#include "lists.h"
#include <stdio.h>
/**
 *print_dlistint- print doubl linked list values
 *@h: the head of the linked list
 *
 *Return: the size of double linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}
	return (size);

}
