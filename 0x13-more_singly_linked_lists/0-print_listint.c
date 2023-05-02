#include "lists.h"

/**
 * print_listint - prints out all the elements of a listint_t list
 * @h: head pointer to the list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
