#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * argstostr - concatenates all arguments
 * @ac: number of arguments
 * @av: array of argument strings
 *
 * Return: returns a pointer with a new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, t_len = 0;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		t_len += strlen(av[i]) + 1;
	}
	result = malloc(t_len * sizeof(char) + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	result[0] = '\0';
	for (i = 0; i < ac; i++)
	{
		strcat(result, av[i]);
		strcat(result, "\n");
	}
	return (result);
}
