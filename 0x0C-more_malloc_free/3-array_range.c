#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * array_range - creates an array of int
 * @min: the minimum value to be included in the array
 * @max: the maximum value to be included in the array
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		arr[i] = min;
	}
	return (arr);
}
