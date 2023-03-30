#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * cap_string - capitalize all words of a string
 * @str: pointer to array to be converted
 *
 * Return: str
 */
char *cap_string(char *str)
{
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t'
				|| str[i - 1] == '\n' || str[i - 1] == ','
				|| str[i - 1] == ';' || str[i - 1] == '.'
				|| str[i - 1] == '!' || str[i - 1] == '?'
				|| str[i - 1] == '"' || str[i - 1] == '('
				|| str[i - 1] == ')' || str[i - 1] == '{'
				|| str[i - 1] == '}')
		{
			str[i] = toupper(str[i]);
		}
	}
	return (str);
}
