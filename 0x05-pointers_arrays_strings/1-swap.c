#include "main.h"
#include <stdio.h>
/**
 * swap_int -  swap the values of two integers
 * @a: 1st values to be swap
 * @b: 2nd values to be swap
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
