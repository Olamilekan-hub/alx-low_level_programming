#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * _strstr - find the first occurence of  substring in a string
 * @haystack: pointer to the string to be searched
 * @needle: pointer to the substring to be searched for
 *
 * Return: returns a pointer to the begining of the located substring, or
 *	NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *hay, *nee;

	while (*haystack != '\0')
	{
		hay = haystack;
		nee = needle;
		while (*hay != '\0' && *nee != '\0' && *hay == *nee)
		{
			hay++;
			nee++;
		}
		if (*nee == '\0')
		{
			return ((char *)(haystack));
		}
		haystack++;
	}
	return (NULL);
}
