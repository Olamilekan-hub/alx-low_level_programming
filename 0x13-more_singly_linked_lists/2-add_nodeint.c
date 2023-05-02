#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the head of the list
 * @head: double pointer to the list
 * @n:
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *New;

	New = malloc(sizeof(listint_t));
	if (New == NULL)
	{
		return (NULL);
	}
	New->n = n;
	New->next = *head;
	*head = New;
	return (*head);
}
