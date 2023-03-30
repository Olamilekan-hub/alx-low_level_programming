#include <stdio.h>
#include "main.h"
/**
 * _strncpy - copy a fixed-size string
 * @n: integer to indicate amount of byte
 * @src: copy source
 * @dest: copy destination
 *
 * Return: the value of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
