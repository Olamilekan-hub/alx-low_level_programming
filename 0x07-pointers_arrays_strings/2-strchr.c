#include <stdio.h>
#include "main.h"
/**
 * _strchr - this function locates a character in a string
 * @s: pointer to the string to be searched
 * @c: character to be seearched for in the string
 *
 * Return: returns a pointer to the first occurence of c or
 *	NULL, if c is not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return (0);
}
