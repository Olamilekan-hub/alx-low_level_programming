#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * rev_string - prints string in reverse order
 * @s: string stored
 *
 */
void rev_string(char *s)
{
	int str = s;
	int i;

	for (i = str - 1; i >= 0; i--)
	{
		_putchar(i);
	}
	_putchar('\n');
}
