#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_square - prints out _ to the stdo
 * @size: the number of # to  print
 *
 * Return: always 0
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
