#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strcat - copy strings from one pointer to another &&
 *		overwriting the teminating null byte (\0)
 * @src: source to copy from
 * @dest: copying destination
 *
 * Return: always (0)
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (ptr);
}
