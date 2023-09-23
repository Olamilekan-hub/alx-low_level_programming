#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_diagonal - prints out _ to the stdo
 * @n: the number of diagonal lines to  print
 *
 * Return: always 0
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
