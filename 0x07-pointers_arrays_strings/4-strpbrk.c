#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to search
 * @accept:string to match
 *
 * Return: returns a pointer to the byte s that matches one of the bytes
 *	in accept, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *j = accept;

	while (*s != '\0')
	{
		while (*j != '\0')
		{
			if (*s == *j)
			{
				return ((char *)(s));
			}
			j++;
		}
		j = accept;
		s++;
	}
	return (NULL);
}
