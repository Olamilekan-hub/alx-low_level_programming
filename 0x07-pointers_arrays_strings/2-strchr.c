#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strchr - this function locates a character in a string
 * @s: pointer to the string to be searched
 * @c: character to be seearched for in the string
 *
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (0);
}
