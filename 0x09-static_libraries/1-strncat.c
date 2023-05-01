#include "main.h"

/**
 * _strncat - concatenates two strings, up to n bytes of src
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: maximum number of bytes to concatenate from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
    int dest_len = 0;
    int i;

    /* find the end of dest */
    while (dest[dest_len] != '\0')
        dest_len++;

    /* concatenate up to n bytes of src to dest */
    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[dest_len + i] = src[i];

    /* add the terminating null byte */
    dest[dest_len + i] = '\0';

    return dest;
}

