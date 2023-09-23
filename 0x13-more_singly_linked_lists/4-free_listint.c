#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - a function that frees a listint_t
 * @head: pointer to the head of the list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *cu;

	while (head != NULL)
	{
		cu = head;
		head = head->next;
		free(cu);
	}
}
