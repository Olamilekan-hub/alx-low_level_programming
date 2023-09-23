#include "main.h"
/**
 * main - entry point of the program
 *
 * Return: always 0 (sucess)
 *
 */
int main(void)
{
	int c;

	c = _islower('H');
	_putchar(c + '0');
	c = _islower('o');
	_putchar(c + '0');
	c = _islower(108);
	_putchar(c + '0');
	_putchar('\n');
	return (0);
}
