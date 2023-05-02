#include "lists.h"

/**
 * print_listint - prints out all the elements of a listint_t list
 * @head: head pointer to the list
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while(h != NULL)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
