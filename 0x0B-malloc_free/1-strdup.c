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
	char *dup = malloc(strlen(str) + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	if (dup == NULL)
	{
		return (NULL);
	}
	strcpy(dup, str);
	return (dup);
	free(str);
}
