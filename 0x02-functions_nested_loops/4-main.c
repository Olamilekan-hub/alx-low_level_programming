#include "main.h"
/**
 * main - entry point of the code
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{
	int c;

	c = _isalpha('H');
	_putchar(c + '0');
	c = _isalpha('o');
        _putchar(c + '0');
	c = _isalpha(108);
        _putchar(c + '0');
	c = _isalpha(';');
        _putchar(c + '0');
	_putchar('\n');
	return (0);
}
