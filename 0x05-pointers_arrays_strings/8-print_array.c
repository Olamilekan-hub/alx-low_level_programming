#include <stdio.h>
#include "main.h"
/**
 * print_array - prints out array accordingly folowed by comma, space & newline
 * @a: integer pointer
 * @n: integer
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
