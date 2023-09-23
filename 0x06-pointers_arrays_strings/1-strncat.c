#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strncat - copy strings from one pointer to another &&
 *		overwriting the teminating null byte (\0)
 * @src: source to copy from
 * @dest: copying destination
 * @n: the max num of bytes to use
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, i = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[a + i] = src[i];
	}
	return (dest);
}
