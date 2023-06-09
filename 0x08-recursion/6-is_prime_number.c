#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - checks if a umber is divisible.
 * @num: the number to be checked.
 * @div: the divisor.
 *
 * Return: if he number is divisible - 0.
 *	if the number is not divisible - 1.
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
	{
		return (0);
	}
	if (div == num / 2)
	{
		return (1);
	}
	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - check if a number is prime.
 * @n: the number to be checked.
 *
 * Return: if the integer is not a prime - 0.
 *	if the integer is prime - 1.
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
	{
		return (0);
	}
	if (n >= 2 && n <= 3)
	{
		return (1);
	}
	return (is_divisible(n, div));
}
