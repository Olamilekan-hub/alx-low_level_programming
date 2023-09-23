#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t
 * @head: pointer to the first node in the list
 * @index: index of the node, starting at 0
 *
 * Return: the nth node of the list or NULL if node does not exit
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int  n = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head)
	{
		if (n == index)
		{
			return (head);
		}
		head = head->next;
		n++;
	}
	return (NULL);
}
