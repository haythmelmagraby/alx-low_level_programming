#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 **add_dnodeint- add node at begening
 *@head: the start of linked list
 *@n: the value of the node
 *
 *Return: the node adress
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	if (!head)
		return (NULL);

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	temp->n = n;
	temp->prev = NULL;
	if (*head)
	{
		temp->next = *head;
		(*head)->prev = temp;
	}
	else
		temp->next = NULL;
	*head = temp;
	return (temp);
}
