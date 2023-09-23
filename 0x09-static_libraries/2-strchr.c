#include "main.h"

/**
 * _strchr - Locates the first occurrence of a character in a string.
 * @s: The string to search.
 * @c: The character to locate.
 *
 * Return: If the character is found - a pointer to it.
 *         If the character is not found - NULL.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (c == '\0')
		return (s);

	return (NULL);
}

