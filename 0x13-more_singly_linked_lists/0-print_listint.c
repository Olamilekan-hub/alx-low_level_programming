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
	const listint_t *ans = h;
	size_t i = 0;

	while (ans != NULL)
	{
		printf("%d\n", ans->n);
		i += 1;
		ans = ans->next;
	}
	return (i);
}
