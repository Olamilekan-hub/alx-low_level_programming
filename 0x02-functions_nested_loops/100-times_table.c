#include <stdio.h>
#include "main.h"
/**
 * print_times_table - print a multiplication timetable
 * @n: starting input
 *
 */
void print_times_table(int n)
{
	int row, col, pro;

	if (n < 0 || n > 15)
		return;

	for (row = 0; row <= n; row++)
	{
		_putchar('0');
		for (col = 1; col <= n; col++)
		{
			pro = row * col;
			_putchar(',');
			_putchar(' ');
			if (pro < 10)
				_putchar(' ');
			if (pro < 100)
				_putchar(' ');
			if (pro / 10 == 0)
			{
				_putchar(pro / 10);
			}
			else 
			{
				_putchar(pro / 10 + '0');
			}
			_putchar(pro % 10 + '0');
		}
		_putchar('\n');
	}
}
