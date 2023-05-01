#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes a character to standard output
 *
 * @c: the character to write
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}

