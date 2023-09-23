#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - This function allocates memory using malloc
 * @b: integer to allocate byte of memory
 *
 * Return: the pinter or 98 if it fails
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
