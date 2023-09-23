#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - a function that deletes head of a node of a listitn_t
 * @head: a pointer to the pointer that points to the first node of the list
 *
 * Return: (0)
 */

int pop_listint(listint_t **head)
{
	listint_t *t = *head;
	int r;

	if (t == NULL)
	{
		return (0);
	}
	r = (*head)->n;
	t = *head;
	*head = (*head)->next;
	free(t);
	return (r);
}
