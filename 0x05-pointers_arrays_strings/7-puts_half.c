#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * puts_half - prints other half of a string
 * @str: stored string
 *
 */
void puts_half(char *str)
{
	int i, g;
	int len = strlen(str);

	if (len % 2 == 0)
	{
		i = len / 2;
	}
	else
	{
		i = (len + 1) / 2;
	}
	for (g = i; g < len; g++)
	{
		_putchar(str[g]);
	}
	_putchar('\n');
}
