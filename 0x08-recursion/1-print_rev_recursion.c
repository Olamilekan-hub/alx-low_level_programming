#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: a pointer to the string
 */
void _print_rev_recursion(char *s)
{
	int len = strlen(s);
	int i = len - 1;

	while (i >= 0)
	{
		printf("%c", s[i]);
		i--;
	}
}
