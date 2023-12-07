#include "lists.h"

/**
 * print_listint - Function prints all the elements of a listint_t list
 * @h: input list
 * Return:nodes number
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}

	return (num);
}
