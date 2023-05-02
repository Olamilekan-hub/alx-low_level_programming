#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - A function that frees a listint_t list.
 * @head: double pointer to the head of list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *t;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		t = *head;
		*head = (*head)->next;
		free(t);
	}
	*head = NULL;
}
