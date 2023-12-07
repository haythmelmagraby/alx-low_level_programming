#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the list
 * Return: pointer to the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *first = NULL;
	listint_t *second = NULL;

	while (*head)
	{
		second = (*head)->next;
		(*head)->next = first;
		first = *head;
		*head = second;
	}

	*head = first;
	return (*head);
}
