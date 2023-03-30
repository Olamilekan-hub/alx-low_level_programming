#include "main.h"
/**
 * reverse_array - reverse the content of an array of int
 * @a: pointer to an integer array
 * @n: num of int of the array
 *
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
