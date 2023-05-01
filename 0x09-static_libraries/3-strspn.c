#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be searched
 * @accept: the characters to be searched for in @s
 *
 * Return: the number of bytes in the initial segment of @s that consist
 *         only of bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int i, j;

    for (i = 0; s[i]; i++)
    {
        for (j = 0; accept[j]; j++)
        {
            if (s[i] == accept[j])
                break;
        }
        if (!accept[j])
            return (i);
    }
    return (i);
}

