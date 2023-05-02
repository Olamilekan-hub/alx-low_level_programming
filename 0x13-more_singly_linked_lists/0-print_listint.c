#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints out all the elements of a listint_t list
 * @h: head pointer to the list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h == NULL)
		{
			printf("%s\n", "(nil)");
		}
		else
		{
			printf("%d\n", h->n);
		}
		h = h->next;
		i++;
	}
	return (i);
}
