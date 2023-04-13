#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - this finction concatenates 2 string
 * @s1: original string
 * @s2: duplicate string
 *
 * Return: the concat string if malloc fails return NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	result = malloc(strlen(s1) + strlen(s2) + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strcat(result, s2);
	return (result);
	free(result);
}
