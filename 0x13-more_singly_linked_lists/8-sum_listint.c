#include "lists.h"

/**
 * sum_listint - summ of all the data of a linked list
 * @head: pointer to the first element of a linked list
 *
 * Return: sum or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
