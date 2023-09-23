#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _calloc - this function allocates memory for array
 * @nmemb: array of integers
 * @size: number of bytes
 *
 * Return: a pointer to the allocated mem. or NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, nmemb * size);
	free(ptr);
	return (ptr);
}
