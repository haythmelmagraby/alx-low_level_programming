#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 **add_dnodeint_end- add node at end
 *@head: the start of linked list
 *@n: the value of the node
 *
 *Return: the node adress
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *node;

	if (!head)
		return (NULL);
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}

	temp->n = n;
	temp->next = NULL;
	if (*head)
	{
		node = *head;
		while (node->next)
			node = node->next;
		temp->prev = node;
		node->next = temp;
	}
	else
	{
		temp->prev = NULL;
		*head = temp;
	}
	return (temp);
}
