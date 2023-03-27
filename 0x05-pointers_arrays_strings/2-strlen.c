#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * _strlen - prints the length of the string
 * @s: char to store the length
 *
 * Return: i
 */
int _strlen(char *s)
{
	int i = 0;
	char *p = s;

	while (*p++)
	{
		i++;
	}
	return (i);
}
