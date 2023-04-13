#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer to a newly allocated copy of the string
 * @str: string to be duplicated
 *
 * Return: the duplicated string
 */
char *_strdup(char *str)
{
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	dup = malloc(strlen(str) + 1);

	if (dup == NULL)
	{
		free(dup);
		return (NULL);
	}
	strcpy(dup, str);
	return (dup);
}
