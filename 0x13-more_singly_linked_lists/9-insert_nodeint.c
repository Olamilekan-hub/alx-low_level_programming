#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: a pointer to a pointer to the first element of the list
 * @idx: index of the list where the new node should be added
 * @n: storage of data
 *
 * Return: Address of NEW NODE OR NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int s = 1;
	listint_t *new, *hold;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		new->n = n;
		return (new);
	}
	if (idx == 0)
	{
		new->next = *head;
		new->n = n;
		*head = new;
		return (new);
	}
	hold = *head;
	while (s < idx)
	{
		hold = hold->next;
		s++;
	}
	new->n = n;
	new->next = hold->next;
	hold->next = new;
	return (new);
}

