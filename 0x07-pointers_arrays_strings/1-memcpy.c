#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: a poiter to the destination memory area where the content
 *	is to be copied to
 * @src: a pointer to the source of data to be copied
 * @n: number of bytes to be copied
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *pD = dest;
	const char *pS = src;

	while (i < n)
	{
		*(pD++) = *(pS++);
		i++;
	}
	return (dest);
}
