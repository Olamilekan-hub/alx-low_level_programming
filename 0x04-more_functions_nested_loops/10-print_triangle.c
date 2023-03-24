#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_triangle - prints out triangle to the stdo
 * @size: the number of # to  print
 *
 * Return: always 0
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			_putchar(' ');
		}
		for (j = 0; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
