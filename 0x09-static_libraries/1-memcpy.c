#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
    char *dest_ptr = dest;
    char *src_ptr = src;
    unsigned int i;

    for (i = 0; i < n; i++) {
        *(dest_ptr + i) = *(src_ptr + i);
    }

    return dest;
}

