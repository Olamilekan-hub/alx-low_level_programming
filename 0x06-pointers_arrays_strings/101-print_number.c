#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer to print
 */
void print_number(int n)
{
	int divisor = 1;
	int last_digit;
	int is_negative = 0;

	if (n < 0)
	{
		_putchar('-');
		is_negative = 1;
	}
	while (n / divisor > 9 || n / divisor < -9)
	{
		divisor *= 10;
	}
	while (divisor != 0)
	{
		last_digit = (n / divisor) % 10;
		if (is_negative)
		{
			_putchar(-last_digit + '0');
		}
		else
		{
			_putchar(last_digit + '0');
		}
		divisor /= 10;
	}
}

