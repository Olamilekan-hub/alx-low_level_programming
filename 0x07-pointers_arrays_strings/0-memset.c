#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _memset - fills the memory with a constant byte
 * @s: pointer to memory area to be filled with a constant byte
 * @b: constant byte to be use to fill the memory
 * @n: number of bytes to be filled with the constant byte
 *
 * Return: pointer to the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
