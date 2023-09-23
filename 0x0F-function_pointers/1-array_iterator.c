#include "function_pointers.h"

/**
 * array_iterator - prints array elements
 * @size: size of array
 * @action: the function pointer
 * @array: the array itself
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (n = 0; n < size; n++)
	{
		action(array[n]);
	}
}
