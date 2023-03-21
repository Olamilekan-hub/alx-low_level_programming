#include "main.h"
/**
 * main - entry point of the function
 *
 * Return: always 0 (sucess)
 *
 */
int main(void)
{
	int n;

	n = print_sign(98);
	_putchar(',');
	_putchar(' ');
	_putchar(n + '0');
	_putchar('\n');
	n = print_sign(0);
       	_putchar(',');
        _putchar(' ');
        _putchar(n + '0');
        _putchar('\n');
	n = print_sign(0xff);
        _putchar(',');
        _putchar(' ');
        _putchar(n + '0');
        _putchar('\n');
	n = print_sign(-1);
        _putchar(',');
        _putchar(' ');
        _putchar(n + '0');
        _putchar('\n');
	return (0);
}
