#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to the string to search
 * @accept: pointer to the string containing the characters to match
 *
 * Return: a pointer to the first occurrence in the string s of any of the bytes
 *         in the string accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
    char *p;

    while (*s)
    {
        for (p = accept; *p; p++)
        {
            if (*s == *p)
                return s;
        }
        s++;
    }

    return NULL;
}

