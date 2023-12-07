#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: list to search
 * Return: The address of the node where the loop
 * starts, or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first = head;
	listint_t *second = head;

	if (!head)
		return (NULL);

	while (first && second && second->next)
	{
		second = second->next->next;
		first = first->next;
		if (second == first)
		{
		first = head;
			while (first != second)
			{
				first = first->next;
				second = second->next;
			}
			return (second);
		}
	}

	return (NULL);
}
