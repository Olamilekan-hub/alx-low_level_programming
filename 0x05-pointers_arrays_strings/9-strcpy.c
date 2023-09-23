#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strcpy - copies the string in a pointer
 * @dest: pointer
 * @src: pointer
 *
 * Return: always rc
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (src);
}
