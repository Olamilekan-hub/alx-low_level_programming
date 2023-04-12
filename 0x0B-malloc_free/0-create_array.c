#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars and init it with a specific char
 * @size: size of the array
 * @c: character to initialize it
 *
 * Return: returns pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size * sizeof(char));
	unsigned int i;

	if (array == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
	free(array);
}
